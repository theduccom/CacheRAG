#include <stdio.h>
#include <math.h>

int main(void) {
  int i, n, j, k;
  double x1, y1, x2, y2, x3, y3;
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double xt1 = (x1 + x2) / 2, xt2 = (x3 + x2) / 2, yt1 = (y1 + y2) / 2, yt2 = (y3 + y2) / 2;
    double t1 = y1 - y2, t2 = y2 - y3;
    double x, y, k1, k2;
    if(!t1) {
      x = xt1;
      k2 = -(x2 - x3) / (y2 - y3);
      y = k2 * (x - xt2) + yt2;
    } else if(!t2) {
      x = xt2;
      k1 = -(x1 - x2) / (y1 - y2);
      y = k1 * (x - xt1) + yt1;
    } else {
      k1 = -(x1 - x2) / (y1 - y2), k2 = -(x2 - x3) / (y2 - y3);
      x = ((k1 * xt1 - k2 * xt2) - (yt1 - yt2)) / (k1 - k2);
      y = k1 * (x - xt1) + yt1;
      //printf("%f %f ", k1, k2);
    }
    double r = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    //printf("%f %f %f %f\n", xt1, yt1, xt2, yt2);
    printf("%.3f %.3f %.3f\n", x, y, r);
  }
  return 0;
}
