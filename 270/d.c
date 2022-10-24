#include <stdio.h>

int cmp(const void *a, const void *b)
{
    return (-*(int *)a + *(int *)b);
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);
    int a[k];

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, k, sizeof(int), cmp);

    // debug
    // for (int i = 0; i < k; i++)
    // {
    //     printf("%d\n", a[i]);
    // }

    int j = 0;
    int sum = 0;
    int is_odds = 0;

    while (n > 0)
    {
        for (int s = 0; s < k; s++)
        {
            if (a[s] <= n)
            {
                n -= a[s];
                //printf("n:%d\n", n);    
                if(is_odds == 0) {      //Takahashi
                    sum += a[s];
                    is_odds = 1;
                } else {                //Aoki
                    is_odds = 0;
                }
                break;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}