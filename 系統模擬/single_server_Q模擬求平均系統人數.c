/*
1. 結合作業7和作業9
2. interarrival time distribution ~ Exponentail(lambda)
3. service time distribution ~ Exponential(mu)
hint: 須完成
void arrival(void);
void departure(void);
答案驗證:平均系統人數n=lambda/(mu-lambda)
*/
#include <stdio.h>
#include <math.h>
#include "rngs.h"
#include "rngs.c"

double set_time = 0.0;
double test,mu,lambda;
int i = 1;
struct node *head = NULL;
struct node *end = NULL;


double Exponential(double lambda){
    if (lambda <= 0) return -1;
    return (-1.0/lambda)*log(Random());
}

void arrival(void){
    head = insertNode(head, createNode(i, set_time+Exponential(mu)));

}

void departure(void){
    while (end->clock <= set_time)
    {
        
    }


}

int main(){


    scanf("輸入到達率lambda: %lf",lambda);
    scanf("輸入服務率mu: %lf",mu);
    
    for (size_t i = 0; i < 10000; i++)  //10000顧客
    {
        set_time += Exponential(lambda);
        printf("%f\n", Exponential(1));
    }
    return 0;
}


