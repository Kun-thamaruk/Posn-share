#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d,r,t,f;
    scanf("%lf %lf %lf %lf",&d,&r,&t,&f);
    printf("%.2lf",f*(d/(t-r)));
    return 0;
}
