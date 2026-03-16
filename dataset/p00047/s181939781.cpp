#include <stdio.h>

int main(void) {
  char ans = 'A', a, b;
  while(scanf("%c,%c", &a, &b) != EOF) {
    if(ans == a) ans = b;
    else if(ans == b) ans = a;
  }
  printf("%c\n", ans);
  return 0;
}
