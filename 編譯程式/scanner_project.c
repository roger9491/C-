#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//初始化結構
struct token
{
    int flag;
    int s;
    int e;
    char *token;
    char word[100];
} token_list[10000];
//存放程式字元
char program[10000];
int cur_i = 0; //現在 字元索引值
int s = 1;     //行數
int index = 0; // token 索引值

//定義特殊符號
char CHAR = '\'';
char STR = '\"';
// 31
char *OPER[] = {"+", "-", "*", "/", "=", ",", "%", ">>", "<<", "++", "--", "+=", "-=", "*=",
                "/=", "%=", "!", "&&", "||", "&", "[", "]", "|", "^", ".", "->", ">", "<", "==", ">=", "<=", "!="};
char SPEC[] = {'{', '}', '(', ')', ';', '?', ':'};
char *SC = "//";
char *MC[] = {"/*", "*/"};
char PREP = '#';

//複製字元/字串給 token_list


//數字
void number(){

    char number[100];
    int i = 0;
    while ((program[cur_i] >= '0' && program[cur_i] <= '9')||(program[cur_i] == '.')||(program[cur_i] == 'e'))
    {
        number[i] = program[cur_i];
        i += 1;
        cur_i += 1;
    }
    

}






//特殊符號
// cheack SPEC
int check_spec(char c)
{
    for (size_t i = 0; i < 7; i++)
    {
        if (c == SPEC[i])
        {
            return 1;
        }
    }
    return -1;
}

// index:token 索引值    c:字元  s: 行數
// cur_i 目前索引直
void special_symbols()
{
    char c = program[cur_i];
    if (c == CHAR)
    {

        token_list[index].s = s;
        token_list[index].token = "CHAR";
        token_list[index].word[0] = c;
        index += 1;
        cur_i += 1; //下一個字元
    }
    else if (c == STR)
    {

        token_list[index].s = s;
        token_list[index].token = "STR";
        token_list[index].word[0] = c;
        index += 1;
        cur_i += 1; //下一個字元
    }
    else if (c == PREP)
    {

        token_list[index].s = s;
        token_list[index].token = "PREP";
        int i = 0;
        while (program[cur_i] != '\n')
        {
            token_list[index].word[i] = program[cur_i];
            cur_i += 1;
            i += 1;
        }
        index += 1;
        // cur_i += 1; //下一個字元
    }
    else
    {
        if (c == '/' && program[cur_i + 1] == '/') // SC
        {

            token_list[index].s = s;
            token_list[index].token = "SC";
            token_list[index].word[0] = c;
            token_list[index].word[1] = program[cur_i + 1];
            index += 1;
            cur_i += 2; //下一個字元
        }
        else if (c == '/' && program[cur_i + 1] == '*')
        {

            token_list[index].s = s;
            token_list[index].token = "MC";
            token_list[index].flag = 1;
            token_list[index].s = s;
            token_list[index].word[0] = c;
            token_list[index].word[1] = program[cur_i + 1];
            cur_i += 2;
            // 迴圈到 '/'
            while (program[cur_i] != '/')
            {
                if (program[cur_i] == '\n')
                {
                    s += 1;
                    cur_i += 1;
                    continue;
                }
                cur_i += 1;
            }
            cur_i += 1;
            token_list[index].e = s;
            index += 1;
        }
        else // OPER or SPEC
        {
            if (check_spec(c) == 1)
            {
                for (size_t i = 0; i < 7; i++)
                {
                    if (c == SPEC[i])
                    {

                        token_list[index].s = s;
                        token_list[index].token = "SPEC";
                        token_list[index].word[0] = c;
                        index += 1;
                        cur_i += 1; //下一個字元
                    }
                }
            }
            else // oper 可能有兩個符號 直接先判斷下一個符號
            {
                int flag = 0;
                for (int i = 0; i < 31; i++)
                {
                    if (strlen(OPER[i]) == 2)
                    {
                        if (program[cur_i + 1] == OPER[i][1])
                        {
                            flag = 1;
                        }
                    }
                }
                if (flag == 1)
                {

                    token_list[index].s = s;
                    token_list[index].token = "OPER";
                    token_list[index].word[0] = program[cur_i];
                    token_list[index].word[0] = program[cur_i + 1];
                    index += 1;
                    cur_i += 2; //下一個字元
                }
                else
                {

                    token_list[index].s = s;
                    token_list[index].token = "OPER";
                    token_list[index].word[0] = program[cur_i];
                    index += 1;
                    cur_i += 1; //下一個字元
                }
            }
        }
    }
}

int main()
{
    FILE *input_file = fopen("sample.c", "r");

    if (!input_file)
    {
        printf("no work");
    }
    else
    {
        printf("work\n");

        char c;
        int count = 0; //字元總數
        do
        {
            // 存入字元陣列
            c = fgetc(input_file);
            program[count] = c;
            count += 1;
            printf("%c", c);

        } while (c != EOF);

        s = 1;     //行數
        index = 0; // token 索引值
        cur_i = 0; //現在 字元索引值

        //測試program
        // for (int i = 0; i < 1000; i++)
        // {
        //     printf("%c",program[i]);
        // }
        // printf("first: %c",program[0]);

        while (cur_i < count)
        {
            // printf("%d", cur_i);
            if (program[cur_i] == '\n')
            {
                s += 1;
                cur_i += 1;
                continue;
            }

            c = program[cur_i];
            if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
            {
                // 字母
                // printf("1");
                cur_i += 1;
            }
            else if ('0' <= c && c <= '9')
            {
                // 數字
                // printf("2");
                cur_i += 1;
            }
            else
            {
                // printf("%c", c);
                // 特殊符號
                if (isspace(program[cur_i]))
                {
                    cur_i += 1;
                    continue;
                }
                special_symbols();
            }
        }

        // 測試結構可用性
        // for (size_t i = 0; i < 3; i++)
        // {
        //     printf("%s %s\n", token_list[i].token, token_list[i].word);
        //     token_list[i].token = "123";
        //     token_list[i].word = "2131";
        //     printf("%s %s\n", token_list[i].token, token_list[i].word);
        // }

        //印出token
        FILE * fp;
        fp = fopen ("output.txt", "w+");
        for (size_t i = 0; i < 10000; i++)
        {
            if (token_list[i].s == 0)
            {
                printf("1111");
                break;
            }
            printf("%d  %s  %s\n", token_list[i].s, token_list[i].token, token_list[i].word);
            fprintf(fp, "%d  %s  %s\n", token_list[i].s, token_list[i].token, token_list[i].word);
        }
        fclose(fp);
        fclose(input_file);
    }
}