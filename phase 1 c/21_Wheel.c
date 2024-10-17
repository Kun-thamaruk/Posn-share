#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int people[40];
int a[210];
int b[200];
int main()
{
    int n, k, i = 0, j = 0, x;
    scanf("%d%d", &n, &k); // n=5
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int walk = n - 1; // n=4
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        while (x)
        {
            walk++; // 5
            while (b[(walk) % n] == 1)
            {
                walk++;
            }
            x--;
        }
        walk++;
        while (b[(walk) % n] == 1)
        {
            walk++;
        }
        people[i % k] += a[walk % n];
        b[walk % n] = 1;
    }
    for (i = 0; i < k; i++)
    {
        printf("%d\n", people[i]);
    }
    return 0;
}
/*
5 3
3 5 2 4 1
3
5
1
2
1
for(j=1; j<=x; j++)
        {
            while(b[(walk+j)%n]==1)
            {
                walk++;
            }
        }

*/
