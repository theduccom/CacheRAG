#include <stdio.h>

int main(void) {
  int ans[4], a;
  ans[0] = ans[1] = ans[2] = ans[3] = 0;
  char c[10];
  while(scanf("%d,%s", &a, c) != EOF) {
    if(c[1]) ans[2]++;
    else if(c[0] == 'A') ans[0]++;
    else if(c[0] == 'B') ans[1]++;
    else ans[3]++;
  }
  printf("%d\n%d\n%d\n%d\n", ans[0], ans[1], ans[2], ans[3]);
  return 0;
}
