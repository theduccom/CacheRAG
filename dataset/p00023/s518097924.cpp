#include <stdio.h>
#include <math.h>

int main(void)
{
  int N;
  scanf("%d", &N);

  int i;
  for (i=0; i<N; ++i) {
    double xa, ya, ra, xb, yb, rb;
    scanf("%lf %lf %lf %lf %lf %lf", &xa, &ya, &ra, &xb, &yb, &rb);

    double distance = sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
    int result;
    if (distance > ra + rb) {
      result = 0;
    }
    else if (distance < ra - rb) {
      result = 2;
    }
    else if (distance < rb - ra) {
      result = -2;
    }
    else {
      result = 1;
    }

    printf("%d\n", result);
  }

  return 0;
}