#include <stdio.h>
#include <math.h>

int main(void)
{
  double v;
  while (scanf("%lf", &v) != EOF) {
    printf("%.0f\n", ceil(4.9*(v/9.8)*(v/9.8)/5)+1);
  }
  return 0;
}