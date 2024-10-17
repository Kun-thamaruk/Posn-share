#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[90];
int main() {
    int q,start,click,x,y,h,v,i,j,t;
    scanf("%d%d%d",&q,&start,&click);
    switch (start) {
        case 1: x=-1;y=1;   break;
        case 2: x=0;y=1;    break;
        case 3: x=1;y=1;    break;
        case 4: x=-1;y=0;   break;
        case 5: x=0;y=0;    break;
        case 6: x=1,y=0;    break;
        case 7: x=-1;y=-1;  break;
        case 8: x=0;y=-1;   break;
        case 9: x=1;y=-1;   break;
    }
    switch (start){
            case 1: i=0; break;
            case 2: switch (click%3){
                case 1: a[0]='A'; break;
                case 2: a[0]='B'; break;
                case 0: a[0]='C'; break;
            } i=1; break;
            case 3: switch (click%3){
                case 1: a[0]='D'; break;
                case 2: a[0]='E'; break;
                case 0: a[0]='F'; break;
            } i=1; break;
            case 4: switch (click%3){
                case 1: a[0]='G'; break;
                case 2: a[0]='H'; break;
                case 0: a[0]='I'; break;
            } i=1; break;
            case 5: switch (click%3){
                case 1: a[0]='J'; break;
                case 2: a[0]='K'; break;
                case 0: a[0]='L'; break;
            } i=1; break;
            case 6: switch (click%3){
                case 1: a[0]='M'; break;
                case 2: a[0]='N'; break;
                case 0: a[0]='O'; break;
            } i=1; break;
            case 7: switch (click%4){
                case 1: a[0]='P'; break;
                case 2: a[0]='Q'; break;
                case 3: a[0]='R'; break;
                case 0: a[0]='S'; break;
            } i=1; break;
            case 8: switch (click%3){
                case 1: a[0]='T'; break;
                case 2: a[0]='U'; break;
                case 0: a[0]='V'; break;
            } i=1; break;
            case 9: switch (click%4){
                case 1: a[0]='W'; break;
                case 2: a[0]='X'; break;
                case 3: a[0]='Y'; break;
                case 0: a[0]='Z'; break;
            } i=1; break;
        }
    q--;
    t=1;
    while(q--){
        scanf("%d%d%d",&h,&v,&click);
        //if (v < 0) v = v*-1;
        //else if(v > 0) v = v*-1;
        x+=h;
        y-=v;
        if (x>1) x=1;
        else if (x<-1) x=-1;
        if (y>1) y=1;
        else if (y<-1) y=-1;
        if (x==-1&&y==1) start=1;
        else if (x==0&&y==1) start=2;
        else if (x==1&&y==1) start=3;
        else if (x==-1&&y==0) start=4;
        else if (x==0&&y==0) start=5;
        else if (x==1&&y==0) start=6;
        else if (x==-1&&y==-1) start=7;
        else if (x==0&&y==-1) start=8;
        else if (x==1&&y==-1) start=9;
        switch (start){
            case 1: /*for (j=0;j<click;j++){
                if (t<0) i=0; break;
                t = (i-1)-j;
                if (t<0) i=0;
                a[t] = '\0';
            } i=t-1;*/ i=i-click-1; if(i<-1) i=-1; break;
            case 2: switch (click%3){
                case 1: a[i]='A'; break;
                case 2: a[i]='B'; break;
                case 0: a[i]='C'; break;
            } break;
            case 3: switch (click%3){
                case 1: a[i]='D'; break;
                case 2: a[i]='E'; break;
                case 0: a[i]='F'; break;
            } break;
            case 4: switch (click%3){
                case 1: a[i]='G'; break;
                case 2: a[i]='H'; break;
                case 0: a[i]='I'; break;
            } break;
            case 5: switch (click%3){
                case 1: a[i]='J'; break;
                case 2: a[i]='K'; break;
                case 0: a[i]='L'; break;
            } break;
            case 6: switch (click%3){
                case 1: a[i]='M'; break;
                case 2: a[i]='N'; break;
                case 0: a[i]='O'; break;
            } break;
            case 7: switch (click%4){
                case 1: a[i]='P'; break;
                case 2: a[i]='Q'; break;
                case 3: a[i]='R'; break;
                case 0: a[i]='S'; break;
            } break;
            case 8: switch (click%3){
                case 1: a[i]='T'; break;
                case 2: a[i]='U'; break;
                case 0: a[i]='V'; break;
            } break;
            case 9: switch (click%4){
                case 1: a[i]='W'; break;
                case 2: a[i]='X'; break;
                case 3: a[i]='Y'; break;
                case 0: a[i]='Z'; break;
            } break;
        }
        i++;
    }
    i--;
    if (i<=-1) printf("null");
    else if(i>-1) printf("%s",a);
    else printf("null");
    return 0;
}