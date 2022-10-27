#include <stdio.h>

int main(void)
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 5;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == -1)
        {
            continue;
        }
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                cnt -= 1;
                a[j] = -1;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}