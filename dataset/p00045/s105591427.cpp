#include <stdio.h>

int main(void) {
  int a, b, sum = 0, q = 0, num = 0;
  while(scanf("%d,%d", &a, &b) != EOF) {
    sum += a * b;
    q++;
    num += b;
  }
  double ave = (double)num / (double)q;
  if(ave - (int)ave >= 0.5) ++ave;
  printf("%d\n%d\n", sum, (int)ave);
  return 0;
}
