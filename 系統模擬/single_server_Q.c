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

double mc;
int n = 0;
double test,mu,lambda;
int i = 1;

double pretime,total;
int n;
int flag; //1 busy 0 idle  
struct node *head = NULL;
struct node *event;
struct node *end = NULL;


double Exponential(double lambda){
    if (lambda <= 0) return -1;
    return (-1.0/lambda)*log(Random());
}

void arrival(){
    head = insertNode(head, createNode(1, mc+Exponential(lambda)));
    n += 1;
    if (n > 1)  //busy
    {

    }else
    {
        head = insertNode(head, createNode(2, mc+Exponential(mu)));
    }
}
void departure(void){
    n -= 1;
    if (n == 0){

    }else{
        head = insertNode(head, createNode(2, mc+Exponential(mu)));
    }
}

int main(){
    // scanf("輸入到達率lambda: %lf",lambda);
    // scanf("輸入服務率mu: %lf",mu);
    lambda = 0.2;
    mu = 0.25;
    n = 0;

    //初始化    1,a     2,d
    mc = 0.0;
    head = createNode(1, 0.0);
    
    struct node *event;
    double total = 0;
    int cout = 0;
    while(head != NULL){

        if(mc > 500000){
            break;
        }

        //獲取事件
        event = head;
        head = head->next;
        total += (event->clock-mc)*n;     //累計系統時間
        mc = event->clock;
        if (event->type == 1)
        {
            
            arrival();
        }else
        {

            departure();
        }

        printf("type: %d,clock: %f\n",event->type,event->clock);
    }


    printf("to: %lf\n",total);
    printf("%lf",mc);
    printf("totlal: %lf\n",total/mc);
    printf("理論值: %lf",lambda/(mu-lambda));
    return 0;
}


