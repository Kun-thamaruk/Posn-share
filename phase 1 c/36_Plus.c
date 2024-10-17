#include <stdio.h>
#include <string.h>

char result[20000] = "";

void add(char a[], char b[])
{
    memset(result, '\0', 20000);
    int a1, b1, a0, b0; // 1: current 0: preceding
    int lena = strlen(a), lenb = strlen(b);
    a1 = a[lena - 1] - '0', b1 = b[lenb - 1] - '0';
    int i, j;
    for (i = lena - 1, j = lenb - 1; i >= -1; i--, j--)
    {
        if (i <= 0)
            a0 = 0;
        else
            a0 = a[i - 1] - '0';
        if (j <= 0)
            b0 = 0;
        else
            b0 = b[j - 1] - '0';
        int c = a1 + b1;
        if (c >= 10)
        {
            c -= 10;
            a0++;
        }
        result[i + 1] = '0' + c;
        a1 = a0, b1 = b0;
        a0 = 0, b0 = 0;
    }
}

/* really bad subtraction function */
void subtract(char a[], char b[])
{
    memset(result, '\0', 20000);
    int a1, b1, a0, b0; // 1: current 0: preceding
    int lena = strlen(a), lenb = strlen(b);
    a1 = a[lena - 1] - '0', b1 = b[lenb - 1] - '0';
    int i, j;
    for (i = lena - 1, j = lenb - 1; i >= 0; i--, j--)
    {
        if (i <= 0)
            a0 = 0;
        else
            a0 = a[i - 1] - '0';
        if (j <= 0)
            b0 = 0;
        else
            b0 = b[j - 1] - '0';
        if (a1 < b1)
        {
            a0--;
            a1 += 10;
        }
        result[i] = '0' + (a1 - b1);
        a1 = a0, b1 = b0;
        a0 = 0, b0 = 0;
    }
}

int compare(char a[], char b[])
{
    int lena = strlen(a), lenb = strlen(b);
    if (lena > lenb)
        return 1;
    else if (lena < lenb)
        return -1;

    int i;
    for (i = 0; i < lena; i++)
    {
        if (a[i] > b[i])
            return 1;
    }
    return -1;
}

void move(char dst[], char src[])
{
    int len = strlen(src);
    int i;
    for (i = 1; i < len; i++)
    {
        dst[i - 1] = src[i];
    }
}

int main()
{
    char x[20000], y[20000];
    scanf("%s %s", x, y);

    if (x[0] != '-' && y[0] != '-')
    {
        if (compare(x, y) == 1)
            add(x, y);
        else
            add(y, x);
    }
    else if (x[0] != '-' && y[0] == '-')
    {
        y[0] = '0';
        char a[20000] = "";
        move(a, y);
        if (compare(a, x) == 1)
        {
            subtract(a, x);
            printf("-");
        }
        else
        {
            subtract(x, a);
        }
    }
    else if (x[0] == '-' && y[0] != '-')
    {
        x[0] = '0';
        char a[20000] = "";
        move(a, x);
        if (compare(a, y) == 1)
        {
            subtract(a, y);
            printf("-");
        }
        else
        {
            subtract(y, a);
        }
    }
    else if (x[0] == '-' && y[0] == '-')
    {
        x[0] = '0';
        y[0] = '0';
        if (compare(x, y) == 1)
            add(x, y);
        else
            add(y, x);
        printf("-");
    }

    int i;
    int lenr = strlen(result);
    int ch = 0;
    for (i = 0; i < lenr - 1; i++)
    {
        if (result[i] == '0' && ch == 0)
        {
            continue;
        }
        printf("%c", result[i]);
        ch = 1;
    }
    printf("%c\n", result[lenr - 1]);
    return 0;
}