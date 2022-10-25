#include <stdio.h>
int main()
{
    char s[10][11];
    int i = 1, j, x1 = 0, x2, y1 = 0, y2;
    for (i = 0; i < 10; i++)
    {
        scanf("%s", s[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i][j] == '#')
            {
                if (x1 == 0) // はじめを確保
                {
                    x1 = j + 1; // i = 0からなので、+1
                    y1 = i + 1; // jもiと同じ
                }
                x2 = j + 1; //常に更新 = さいごに更新された位置を格納
                y2 = i + 1;
            }
        }
    }
    printf("%d %d\n%d %d\n", y1, y2, x1, x2);
}