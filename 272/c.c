#include <stdio.h>


void qsort(void *base, size_t num, size_t size, int (*compare)(const void *, const void *));

//降順にしたい
int compare_int(const void *a, const void *b)
{
    if (*(long *)a > *(long *)b)
    {
        return -1;
    }
    else if (*(long *)a < *(long *)b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    long int n;
    scanf("%ld", &n);

    long int a[n], max;
    for (long int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    } 

    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(long int ), compare_int);
    max = 0;

    for (long int i = 0; i < n; i++)
    {
        for (long int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % 2 == 0)
            {
                if (max < (a[i] + a[j]))
                {
                    max = a[i] + a[j];
                    printf("%ld\n", max);
                    return 0;
                }
            }
        }
    }

    if (max == 0)
        printf("-1\n");
    return 0;
}