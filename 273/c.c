// 1 以上 N 以下の整数 i であって、次の条件を満たすものの個数を求めよ。
//配列A に含まれる整数のうち A_iより大きいものはちょうど K 種類である。

#include <stdio.h>

void qsort(void *base, size_t num, size_t size, int (*compare)(const void *, const void *));

//降順
int compare(const void *a, const void *b)
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
    int n;
    scanf("%d", &n);
    long int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }

//    qsort(a, sizeof(a) / sizeof(a[0]), sizeof(long int), compare);

    // debug
    // printf("---after qsort---\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%ld\n", a[i]);
    // }

    int cnt;
    for(int i = 0; i < n; i++) {
        cnt = 0;
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                //write me
                ++cnt;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}