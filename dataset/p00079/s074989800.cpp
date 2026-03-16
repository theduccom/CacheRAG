#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3;
  double a, b, c, z, s = 0.0;
  scanf("%lf,%lf\n", &x1, &y1);
  scanf("%lf,%lf\n", &x2, &y2);
  while (scanf("%lf,%lf\n", &x3, &y3) == 2) {
    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    z = (a+b+c)*0.5;
    s += sqrt(z*(z-a)*(z-b)*(z-c));
    x2 = x3;
    y2 = y3;
  }
  printf("%.6lf\n", s);
  return 0;
}