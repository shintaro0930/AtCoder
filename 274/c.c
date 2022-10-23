#include <stdio.h>

int main (void)
{
  int n, a;
  int ameba[40010];

  scanf("%d", &n);

  ameba[0] = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a);

    ameba[2 * i] = ameba[a] + 1;
    ameba[2 * i + 1] = ameba[a] + 1;
  }

  for (int i = 0; i < 2 * n + 1; i++)
  {
    printf("%d\n", ameba[i]);
  }

  return 0;

}


