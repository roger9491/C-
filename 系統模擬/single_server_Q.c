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
#include "sim.h"

double set_time;
double test,mu,lambda;
int i = 1;

double pretime,total;
int n;
struct node *head = NULL;
struct node *event;
// struct node *end = NULL;


double Exponential(double lambda){
    if (lambda <= 0) return -1;
    return (-1.0/lambda)*log(Random());
}

void arrival(void){
    total += (event->clock - pretime)*n;
    n += 1;
    pretime = event->clock;
}

void departure(void){
    total += (event->clock - pretime)*n;
    n -= 1;
    pretime = event->clock;
}

int main(){


    // scanf("輸入到達率lambda: %lf",lambda);
    // scanf("輸入服務率mu: %lf",mu);
    lambda = 0.2;
    mu = 0.25;
    set_time = 0.0;

    head = createNode(1, set_time);
    head = insertNode(head, createNode(2, set_time + Exponential(mu)));
    for (size_t i = 0; i < 2; i++)  //10000顧客
    {
        set_time += Exponential(lambda);
        head = insertNode(head, createNode(1, set_time));
        // head = insertNode(head, createNode(2, set_time+Exponential(mu)));
    }


    pretime = 0;
    total = 0;
    n = 0;
    event = head;
    while(event != NULL){
        if (event->type == 1)
        {
            arrival();
        }else
        {
            departure();
        }
        
        printf("type: %d,clock: %f\n",event->type,event->clock);
        event = event->next;

    }
    printf("totlal: %lf\n",total/pretime);
    printf("理論值: %lf",lambda/(mu-lambda));
    return 0;
}


