#include <stdio.h>
#include <math.h>
#include "rngs.h"
#include "rngs.c"

double Exponential(double lambda){
    if (lambda <= 0) return -1;
    return (-1.0/lambda)*log(Random());
}

int main(){

    double test;
    for (size_t i = 0; i < 10000; i++)
    {
        printf("%f\n", Exponential(1));
    }
    return 0;
}


