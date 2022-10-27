#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[109], t[109];
    scanf("%s", s);
    scanf("%s", t);
    int x = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != t[i])
            x = 1;
    }
    if (x == 0)
        printf("Yes");
    else if (x == 1)
        printf("No");
    
    return 0;
}
