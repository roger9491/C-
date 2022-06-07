#include<stdlib.h>
#include<stdio.h>

struct token
{
    char *token;
    char *word;
}token_list[10000];

// void initi_token_list(){
//     for (size_t i = 0; i < count; i++)
//     {
//         /* code */
//     }
    
// }



int main(){
    FILE *input_file = fopen("sample.c","r");

    if (!input_file)
    {
        printf("no work");
    }else{
        printf("work\n");
        printf("%c", fgetc(input_file));

        char c;
        do
        {
            
            c = fgetc(input_file);
            printf("%c",c);

        } while (c != EOF);
        for (size_t i = 0; i < 3; i++)
        {
            printf("%s %s\n", token_list[i].token, token_list[i].word);
            token_list[i].token = "123";
            token_list[i].word = "2131";
            printf("%s %s\n", token_list[i].token, token_list[i].word);
        }
        
        for (size_t i = 0; i < 10000; i++)
        {
            printf("%d",i);
            printf("%s %s\n", token_list[i].token, token_list[i].word);
            if (token_list[i].token == NULL&&token_list[i].word == NULL)
            {
                    printf("1111");
                    break;
            }
            
        }
        






        
    }
    


}