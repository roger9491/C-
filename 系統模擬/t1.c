#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Exponential(double lambda);
int main(void){
    double y ;
    int i;
    for(i=0;i<1000;i++){
        y=Exponential(1.0);
        printf("%f\n",y);
    }
    printf("RAND_MAX = %d\n", RAND_MAX);
}

double Exponential(double lambda)
{

	double x;
	do {

		x = ((double) rand() / RAND_MAX);
	}
	while ((x == 0) || (x == 1));

	return(-lambda * log(x));
}