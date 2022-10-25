#include <stdio.h>

long long int to_bin(long long int decimal)
{
    long long int binary = 0;
    long long int base = 1;

    while (decimal > 0)
    {
        binary = binary + (decimal % 2) * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    return binary;
}

int main(void)
{
    long long int n;
    scanf("%lld", &n);

    for (long long int i = 0; i <= n; i++)
    {
        if ((i & n) == i)
        {
            printf("%lld\n", i);
        }
    }
    return 0;
}