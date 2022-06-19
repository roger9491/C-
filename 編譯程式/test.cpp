#include <stdlib.h>
#include <stdio.h>
#include <cstring>
struct token
{
    int flag;
    int s;
    int e;
    char *token;
    char *word;
} token_list[10000];

int main()
{
    char c = 'a';
    char *OPER[] = {"+", "-", "*", "/", "=", ",","%", ">>", "<<" , "++", "--", "+=", "-=", "*=", 
"/=","%=", "!", "&&", "||", "&", "[", "]", "|","^", ".", "->" , ">", "<", "==", ">=", "<=", "!="};
    for (size_t i = 0; i < 100; i++)
    {
        printf("%s ", OPER[i]);
        printf("%d", i);
        if (OPER[i] == "\t")
        {   
            printf("%d", i);
            break;
        }
        
    }
    
}