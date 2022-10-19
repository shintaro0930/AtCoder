// f(0)=1
//任意の正整数 k に対し f(k)=k×f(k−1)

#include <stdio.h>

int f(int k){
    if(k == 0) 
        return 1;
    
    return k * f(k - 1);
}


int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", f(n));

    return 0;
}