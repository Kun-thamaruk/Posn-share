#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Plus: %.2lf\nMinus: %.2lf\nMultiply: %.2lf\nDivide: %.2lf\n",a+b,a-b,a*b,a/b);
    printf("Modulo: %.2lf\nPower: %.2lf\nRoot: %.2lf\n",fmod(a,b),pow(a,b),pow(a,1.0/b));
    return 0;
}
