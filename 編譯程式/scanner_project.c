#include <stdlib.h>
#include <stdio.h>

//初始化結構
struct token
{
    int flag;
    int s;
    int e;
    char *token;
    char *word;
} token_list[10000];
//存放程式字元
char program[10000];
int cur_i = 0; //現在 字元索引值

//定義特殊符號
char CHAR = '\'';
char STR = ' " ';
// 31
char *OPER[] = {"+", "-", "*", "/", "=", ",", "%", ">>", "<<", "++", "--", "+=", "-=", "*=",
                "/=", "%=", "!", "&&", "||", "&", "[", "]", "|", "^", ".", "->", ">", "<", "==", ">=", "<=", "!="};
char SPEC[] = {"{", "}", "(", ")", ";", "?", ":"};
char *SC = "//";
char *MC[] = {"/*", "*/"};
char PREP = '#';

// index:token 索引值    c:字元  s: 行數
void special_symbols(int index, int cur_i, int s)
{
    char c = program[cur_i];
    if (c == CHAR)
    {
        token_list[index].s = s;
        token_list[index].token = "CHAR";
        token_list[index].word = c;
        index += 1;
        cur_i += 1; //下一個字元
    }
    else if (c == STR)
    {
        token_list[index].s = s;
        token_list[index].token = "STR";
        token_list[index].word = c;
        index += 1;
        cur_i += 1; //下一個字元
    }
    else if (c == PREP)
    {
        token_list[index].s = s;
        token_list[index].token = "PREP";
        token_list[index].word = c;
        index += 1;
        cur_i += 1; //下一個字元
    }
    else
    {
        if (c == "/" && program[cur_i + 1] == '/') // SC
        {
            token_list[index].s = s;
            token_list[index].token = "SC";
            token_list[index].word = c;
            index += 1;
            cur_i += 2; //下一個字元
        }
        else if (c == '/' && program[cur_i + 1] == '*')
        {
            token_list[index].s = s;
            token_list[index].token = "SC";
            token_list[index].word = c;
            index += 1;
            cur_i += 2; //下一個字元
        }
        else // OPER or SPEC
        {
            if (check_spec(c))
            {
                for (size_t i = 0; i < 7; i++)
                {
                    if (c == SPEC[i])
                    {
                        token_list[index].s = s;
                        token_list[index].token = "SPEC";
                        token_list[index].word = c;
                        index += 1;
                        cur_i += 1; //下一個字元
                    }
                }
            }else
            {
                /* code */
            }
            
        }
    }
}

// cheack SPEC
int check_spec(char c)
{
    for (size_t i = 0; i < 7; i++)
    {
        if (c == SPEC[i])
        {
            return 1
        }
    }
    return -1
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
        printf("%c", fgetc(input_file));

        char c;
        int count = 0; //字元總數
        do
        {
            // 存入字元陣列
            c = fgetc(input_file);
            program[count] = c;
            count += 1;
        } while (c != EOF);

        int s = 1;     //行數
        int index = 0; // token 索引值
        cur_i = 0;     //現在 字元索引值

        while (cur_i < count)
        {
            if (program[cur_i] == "\n")
                s += 1;
            if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
            {
                // 字母
                printf("1");
            }
            else if ('0' <= c && c <= '9')
            {
                // 數字
            }
            else
            {
                // 特殊符號
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
        for (size_t i = 0; i < 10000; i++)
        {
            if (token_list[i].token == NULL && token_list[i].word == NULL)
            {
                printf("1111");
                break;
            }
        }
    }
}