#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%.3f\n", b / a);
    return 0;
}