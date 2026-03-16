#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979

int main(void) {
  double x = 0, y = 0;
  int d = 90;
  while( 1 ) {
    int a, b;
    scanf("%d,%d", &a, &b);
    if(!a && !b) break;
    x += cos((double)d / 180.0 * pi) * a;
    y += sin((double)d / 180.0 * pi) * a;
    //printf("%d %d %d\n", d, (int)x, (int)y);
    d -= b;
    d %= 360;
  }
  printf("%d\n%d\n", (int)x, (int)y);
  return 0;
}
