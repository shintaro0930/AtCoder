#include <stdio.h>

int main(void)
{
    long int n, q;
    scanf("%ld %ld", &n, &q);

    long long int a[n][200005];
    long int len[n];

    for (long int i = 0; i < n; i++)
    {
        scanf("%ld", &len[i]);
        for (long int j = 0; j < len[i]; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }

    long int s[q], t[q];
    for(long int i = 0; i < q; i++) {
        scanf("%ld %ld", &s[i], &t[i]);
    }
    
    for(long int i = 0; i < q; i++) {
        printf("%lld\n", a[s[i]- 1][t[i] - 1]);
    }

    return 0;
}