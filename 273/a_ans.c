#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (-*(int *)a + *(int *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    if (a)
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmp);
        int q = 1, m = 0;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
                q++;
            else
            {
                printf("%d\n", q);
                q = 1;
                m++;
            }
        }
        printf("%d\n", q);
        m++;
        for (int i = m; i < n; ++i)
        {
            printf("%d\n", 0);
        }
    }
    return 0;
}