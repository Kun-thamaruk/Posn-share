#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*
2 2 3 2
4 5 -2
3 -4 1
-1 2
-5 -3
3 -6
*/
int main()
{
    int n1,m1,n2,m2,i,j,c,ans=0;
    scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
    if(m1!=n2)printf("Can't Multiply.\n");
    int a[n1][m1],b[n2][m2];
    int x[n1][m2];
    for(i=0;i<n1; i++)
    {
        if(m1!=n2){break;}
        for(j=0; j<m1; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n2; i++)
    {
        if(m1!=n2){break;}
        for(j=0; j<m2; j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
        for(i=0;i<n1; i++)
        {

            if(m1!=n2)break;
            for(j=0; j<m2; j++)
            {
                ans=0;
                for(c=0; c<m1; c++)
                {
                    ans=ans+a[i][c]*b[c][j];
                }
                x[i][j]=ans;
            }
        }
        for(i=0;i<n1; i++)
        {
            if(m1!=n2){break;}

             else for(j=0; j<m2; j++)
            {

                printf("%d ",x[i][j]) ;
            }
            printf("\n");
        }
        return 0;
}
