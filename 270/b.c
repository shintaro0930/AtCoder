#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, z, ans;
    scanf("%d %d %d", &x, &y, &z);

    if (y < 0)
    {
        x = -x;
        y = -y;
        z = -z;
    }

    if (x < y)
    {
        ans = abs(x);
    }
    else if (y < z)
    {
        ans = -1;
    }
    else
    {
        ans = abs(z) + abs(x - z);
    }

    printf("%d\n", ans);

    return 0;
}