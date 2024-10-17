#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e5 + 10;

struct A
{
    char s[110];
    bool operator<(const A &o) const
    {
        if (strcmp(s, o.s) < 0)
        {
            return true;
        }
        return false;
    }
};

int a[MaxN];
double b[MaxN];
char c[MaxN];
A d[MaxN];

int main()
{
    int opr, n;
    cin >> opr;
    cin >> n;
    if (opr == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a + 1, (a + 1) + n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
        for (int i = n; i >= 1; i--)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else if (opr == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%lf", &b[i]);
        }
        sort(b + 1, (b + 1) + n);
        for (int i = 1; i <= n; i++)
        {
            printf("%.0lf ", b[i]);
        }
        printf("\n");
        for (int i = n; i >= 1; i--)
        {
            printf("%.0lf ", b[i]);
        }
        printf("\n");
    }
    else if (opr == 3)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf(" %c", &c[i]);
        }
        sort(c + 1, (c + 1) + n);
        for (int i = 1; i <= n; i++)
        {
            printf("%c ", c[i]);
        }
        printf("\n");
        for (int i = n; i >= 1; i--)
        {
            printf("%c ", c[i]);
        }
        printf("\n");
    }
    else if (opr == 4)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf(" %s", d[i].s);
        }
        sort(d + 1, (d + 1) + n);
        for (int i = 1; i <= n; i++)
        {
            printf("%s ", d[i].s);
        }
        printf("\n");
        for (int i = n; i >= 1; i--)
        {
            printf("%s ", d[i].s);
        }
        printf("\n");
    }
}