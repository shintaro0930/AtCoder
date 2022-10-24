#include <stdio.h>
#include <stdlib.h>

#define N 200000

int *ej[N], eo[N];

void append(int i, int j)
{
    int o = eo[i]++;

    if (o >= 2 && (o & o - 1) == 0)
        ej[i] = (int *)realloc(ej[i], o * 2 * sizeof *ej[i]);
    ej[i][o] = j;
}

int dfs(int p, int i, int t)
{
    int o;

    if (i == t)
    {
        printf("%d", i + 1);
        return 1;
    }
    for (o = eo[i]; o--;)
    {
        int j = ej[i][o];

        if (j != p && dfs(i, j, t))
        {
            printf(" %d", i + 1);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n, h, i, j, s, t;

    scanf("%d%d%d", &n, &s, &t), s--, t--;
    for (i = 0; i < n; i++)
        ej[i] = (int *)malloc(2 * sizeof *ej[i]);
    for (h = 0; h < n - 1; h++)
    {
        scanf("%d%d", &i, &j), i--, j--;
        append(i, j), append(j, i);
    }
    dfs(-1, t, s), printf("\n");
    return 0;
}