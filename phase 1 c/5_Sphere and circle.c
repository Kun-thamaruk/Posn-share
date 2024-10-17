#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf",&r);
    //printf("%.3lf\n%.3lf\n%.3lf\n%.3lf",4*M_PI*r*r,4*M_PI*r*r*r/3,M_PI*r*r,2*M_PI*r);
    printf("%.3lf\n",(3.141592*4)*(r*r));
    printf("%.3lf\n",4*3.141592*r*r*r/3);
    printf("%.3lf\n",3.141592*(r*r));
    printf("%.3lf",3.141592*2*r);
    return 0;
}
