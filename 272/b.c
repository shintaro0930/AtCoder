#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int cnt[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cnt[i][j] = 0;
    }
  }
  for (int i = 0; i < m; i++) {
    int k;
    scanf("%d", &k);

    int a[k];

    for (int j = 0; j < k; j++) {
      scanf("%d", &a[j]);
    }
    for (int j = 0; j < k; j++) {
      for (int l = j + 1; l < k; l++) {
        cnt[a[j] - 1][a[l] - 1]=1;
      }
    }
  }
  int is_friend = 1;
  
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (cnt[i][j] == 0) {
        is_friend = 0;
      }
    }
  }
  if (is_friend == 1) {
    puts("Yes");
  } else {
    puts("No");
  }
  return 0;
}