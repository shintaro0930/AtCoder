#include <stdio.h>


int main(void)
{
    int n, m, k;
    scanf("%d %d", &n, &m);

    int x[m][n]; 

    //initialized
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            x[i][j] = 0;
        }
    }
    
    for(int i = 0; i < m; i++) {
        scanf("%d", &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &x[i][j]);
            //chk[];
        }
    }

    int chk[m][k];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            
        }
    }

    //debug
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }


    return 0;
}