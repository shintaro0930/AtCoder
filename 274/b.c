#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans[b];
    char str[b + 1];

    // initialize
    for (int i = 0; i < b; i++)
        ans[b] = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%s", str);
        for (int j = 0; j < b; j++)
        {
            if (str[i] == '#')
                ans[j]++;
        }
    }

    for (int i = 0; i < b; i++)
        printf("%d ", ans[i]);
    printf("\n");

    return 0;
}