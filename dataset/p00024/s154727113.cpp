#include <stdio.h>

int main(void) {
  int n, i, j, k;
  double v;
  while(scanf("%lf", &v) != EOF) {
    v /= 9.8;
    double y = 4.9 * v * v;
    y += 5;
    if((int)(y / 5) == y / 5.0) printf("%d\n", (int)(y / 5));
    else printf("%d\n", (int)(y / 5 + 1));
  }
  return 0;
}
