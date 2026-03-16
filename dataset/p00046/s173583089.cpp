#include <stdio.h>

int main(void) {
  double a, min = 1000000.0, max = 0.0;
  while(scanf("%lf", &a) != EOF) {
    if(min > a) min = a;
    if(max < a) max = a;
  }
  printf("%f\n", max - min);
  return 0;
}
