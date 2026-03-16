#include <stdio.h>

int main(void) {
  int i, j, k, ansc = 0, ansh = 0, a, b, c;
  while( scanf("%d,%d,%d", &a, &b, &c) != EOF ) {
    if(a * a + b * b == c * c) ++ansc;
    if(a == b) ++ansh;
  }
  printf("%d\n%d\n", ansc, ansh);
  return 0;
}
