#include <stdio.h>

int main(void)
{
  int ameba[400010];
  int n, num, i, count, val;

  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &num);
    ameba[2 * i] = ameba[num] + 1;
    ameba[2 * i + 1] = ameba[num]+ 1;
  }

  printf("0\n");
  for (i = 2; i <= 2 * n + 1; i += 2)
  {
    printf("%d\n%d\n", ameba[i], ameba[i + 1]);
  }
  return 0;
}