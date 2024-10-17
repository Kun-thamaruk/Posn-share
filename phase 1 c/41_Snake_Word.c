#include <stdio.h>
#include <string.h>
#include <ctype.h>

int r, c, len, ch;
char a[50][50], s[110];
int mark[50][50], ans[2][110], di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};

void play(int i, int j, int st)
{
    if (st == len - 1)
    {
        ch = 1;
        return;
    }
    int k, ii, jj;
    for (k = 0; k < 4; k++)
    {
        ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || jj < 0 || ii >= r || jj >= c)
            continue;
        if (mark[ii][jj] == 1)
            continue;
        if (a[ii][jj] != s[st + 1])
            continue;
        if (ch == 1)
            continue;
        mark[ii][jj] = 1;
        ans[0][st + 1] = ii + 1, ans[1][st + 1] = jj + 1;
        play(ii, jj, st + 1);
        mark[ii][jj] = 0;
    }
}

int main()
{
    int i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf(" %c", &a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    int q;
    scanf("%d", &q);
    while (q--)
    {
        ch = 0;
        scanf(" %s", s);
        len = strlen(s);
        for (i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
        }
        for (i = 0; i < r && ch == 0; i++)
        {
            for (j = 0; j < c && !ch; j++)
            {
                if (s[0] == a[i][j])
                {
                    mark[i][j] = 1;
                    ans[0][0] = i + 1, ans[1][0] = j + 1;
                    play(i, j, 0);
                    mark[i][j] = 0;
                }
            }
        }
        if (!ch)
            printf("No Matching Word\n");
        else
        {
            for (i = 0; i < len; i++)
            {
                printf("%d %d\n", ans[0][i], ans[1][i]);
            }
        }
    }
    return 0;
}
