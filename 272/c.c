#include <stdio.h>

// 2要素の和が偶数ならば1, そうでないならば-1をoutput

void qsort(void *base, size_t num, size_t size, int (*compare)(const void *, const void *));

//降順にしたい
int compare_int(const void *v1, const void *v2)
{
    const int _v1 = *((const int *)v1);
    const int _v2 = *((const int *)v2);

    if (_v1 > _v2)
    {
        return 1;
    }
    else if (_v1 < _v2)
    {
        return -1;
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

    long long int a[n], max;
    for (long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    
    qsort(a, sizeof(a[n]) / sizeof(a[0]), sizeof(long long int), compare_int);
    max = 0;

    // debug
    for (long int i = 0; i < n; i++)
    {
        printf("%lld\n", a[i]);
    }

    for (long int i = 0; i < n; i++)
    {
        for (long int j = i + 1; j < n; j++)
        {
            // printf("%lldと%lld\n", a[i], a[j]);
            if ((a[i] + a[j]) % 2 == 0)
            {
                if (max < (a[i] + a[j]))
                {
                    max = a[i] + a[j];
                }
            }
        }
    }

    if (max == 0)
        printf("-1\n");
    else
        printf("%lld\n", max);

    return 0;
}