#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    int q;
    int h1,k1,r1,h2,k2,r2;
    int a,b,c,d,e;
    scanf("%d",&q);

    while(q--){
            scanf("%d%d%d%d%d%d",&h1,&k1,&r1,&h2,&k2,&r2);
            a=abs(h1-h2);
            b=abs(k1-k2);
            e = sqrt(pow(a,2)+pow(b,2));
            if(r1>r2)c=r1,d=r2;
            if(r1<r2)c=r2,d=r1;
            if(h1==h2 && r1==r2 && k1==k2){
              printf("More\n");
            }else if(e>r1+r2){
              printf("None\n");
            }else if(e==r1+r2){
              printf("One\n");
            }else if(e+d==c){
              printf("One\n");
            }else if(e+d<c){
              printf("None\n");
            }else if(r1+r2>e){
              printf("More\n");
            }

    }

}
