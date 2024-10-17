#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2,x3,y3,a,b;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a = abs((x1*y2 + x2*y3 + x3*y1) - (x2*y1 + x3*y2 + x1*y3))*0.5;
    b = sqrt(a*4.0/sqrt(3.0));
    printf("%.2lf %.2lf %.2lf",b,b/2.0,sqrt(3)*b/2.0);
    return 0;
}
