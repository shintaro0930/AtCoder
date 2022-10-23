#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans[b];    // b
    char s[b + 1]; // b+1
    for (int i = 0; i < b; i++)
        ans[i] = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%s", s);
        for (int j = 0; j < b; j++)
        {
            if (s[j] == '#')
                ans[j]++;
        }
    }
    for (int i = 0; i < b; i++)
        printf("%d ", ans[i]);
    return 0;
}