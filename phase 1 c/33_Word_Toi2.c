/*
    TASK: Word TOI2
    AUTHOR: Thamarak krutkerd
    SCHOOL: RYW
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int di[] = {-1, -1, 0, 1, 1, 1, 0, -1}, dj[] = {0, 1, 1, 1, 0, -1, -1, -1};
char A[333][333], S[333];
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int i, j, k, dr, t, K;
    for (i = 0; i < N; i++)
        scanf(" %s", A[i]);
    scanf("%d", &K);
    for (k = 0; k < K; k++)
    {
        int FND = 0;
        scanf(" %s", S);
        int len = strlen(S);
        for (i = 0; i < N && !FND; i++)
        {
            for (j = 0; j < M && !FND; j++)
            {
                if (tolower(S[0]) == tolower(A[i][j]))
                {
                    for (dr = 0; dr < 8 && !FND; dr++)
                    {
                        int x = i, y = j;
                        for (t = 0; t < len; t++)
                        {
                            if (towlower(A[x][y]) != tolower(S[t]))
                                break;
                            if (t == len - 1)
                            {
                                printf("%d %d\n", i, j);
                                FND = 1;
                            }
                            x += di[dr], y += dj[dr];
                            if (x < 0 || x >= N || y < 0 || y >= M)
                                break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/*TEST CASE
8 11
ascDEFGhigg
hTqkComPutk
FayUcoompuTm
FcsierMqsrc
bkoArUePeyv
KLcbqwekumk
sreTNIophtb
yUiqLxcnBje
4
Compute
Queue
stack
Pointer
*/