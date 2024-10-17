#include <stdio.h>

int a[100005], mic[100005];

int main()
{
    int n, q, i, r, s;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        mic[i] = mic[i - 1] + a[i];
    }
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &r, &s);
        printf("%d\n", mic[s] - mic[r - 1]);
    }
    return 0;
}