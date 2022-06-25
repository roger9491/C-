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
#include <string.h>
#include "rngs.h"
#include "rngs.c"
#include "sim.h"

double mc;
int n = 0;  //系統總人數
double test,mu,lambda;
int i = 1;
int k;  //系統限制人數
double pretime,total;
int total_n;

int flag; //1 busy 0 idle  
struct node *head = NULL;
struct node *event;
struct node *end = NULL;


double Exponential(double lambda){  //
    if (lambda <= 0) return -1;
    return (-1.0/lambda)*log(Random());
}

void arrival(){
    if (n < k)
    {
        head = insertNode(head, createNode(1, mc+Exponential(lambda)));
        n += 1;


    // if (n > k)  //busy
    // {

    // }else
    // {
        head = insertNode(head, createNode(2, mc+Exponential(mu)));
    // } 
        }
}
void departure(void){
    n -= 1;
    // if (n <= k){

    // }else{
        // head = insertNode(head, createNode(2, mc+Exponential(mu)));
    // }
}

struct m_m_k_k
{
    int k;
    double money;
    double cap;
}m_m_k_k_a[100];


int main(int argc, char * argv[]){
    // scanf("輸入到達率lambda: %lf",lambda);
    // scanf("輸入服務率mu: %lf",mu);
    //開啟檔案
    FILE *fp;
    fp = fopen("output.txt","w+");



    for (size_t i = 1; i < argc; i++)
    {   
        printf("%s\n",argv[i]);
    }
    // lambda = atof(argv[1]);
    // mu = atof(argv[2]);
    // k = atoi(argv[3]);

    int ans_k;
    double ans_mon = 0;
    for (int i = 1; i < 100; i++)
    {
        k = i;
        lambda = 20;
        mu = 0.5;
        //初始化    1,a     2,d
        mc = 0.0;
        head = NULL;
        head = createNode(1, 0.0);
        // k = 3;
        struct node *event;
        double total = 0;
        int cout = 0;
        n = 0;
        
        while(head != NULL){

            if(mc > 800){    //500000
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
            // printf("type: %d,clock: %f\n",event->type,event->clock);
            // printf("head type: %d,clock: %f\n",head->type,head->clock);
            }
        m_m_k_k_a[i].k = k;
        m_m_k_k_a[i].money = total/mc * 500 * 800 - 1000*k * 100;
        m_m_k_k_a[i].cap = total/mc/k;
        if (m_m_k_k_a[i].money > ans_mon)
        {
            ans_k = k;
            ans_mon = m_m_k_k_a[i].money;
        }
        printf("%d\n",k);
        fprintf(fp, "%d     %lf     %lf\n",m_m_k_k_a[i].k,m_m_k_k_a[i].money,m_m_k_k_a[i].cap);

    }
    printf("to: %lf\n",total);
    printf("%lf",mc);
    printf("totlal: %lf\n",total/mc/k);
    printf("理論值: %lf",lambda/(mu-lambda));
    printf("ans: k: %d  mon: %lf",ans_k,ans_mon);
    fclose(fp);
    return 0;
}


