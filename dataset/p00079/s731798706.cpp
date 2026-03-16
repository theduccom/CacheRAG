#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(void){
  double S = 0.0, fx, fy, n1x, n1y, n2x, n2y;
  scanf("%lf,%lf", &fx, &fy);
  scanf("%lf,%lf", &n1x, &n1y);
  while(scanf("%lf,%lf", &n2x, &n2y) != EOF){
    double a, b, c, z;
    a = sqrt((n1x - fx) * (n1x - fx) + (n1y - fy) * (n1y - fy));
    b = sqrt((n2x - n1x) * (n2x - n1x) + (n2y - n1y) * (n2y - n1y));
    c = sqrt((fx - n2x) * (fx - n2x) + (fy - n2y) * (fy - n2y));
    z = (a + b + c) / 2;
    S += sqrt(z * (z - a) * (z - b) * (z - c));
    n1x = n2x; n1y = n2y;
  }
  printf("%.6lf\n", S);
  return 0;
}