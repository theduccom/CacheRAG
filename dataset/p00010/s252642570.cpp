#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

#define SQ(x) (x * x)

int main(void)
{
  int N, i;
  double x1, x2, x3;
  double y1, y2, y3;
  double a, b, c, d, e, f;
  double l, m, n;
  double xp,yp, r;

  cin >> N;
  for (i = 0; i < N; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    a = x1 - x2;
    b = y1 - y2;
    c = -1 * (SQ(x1) - SQ(x2) + SQ(y1) - SQ(y2));
    d = x1 - x3;
    e = y1 - y3;
    f = -1 * (SQ(x1) - SQ(x3) + SQ(y1) - SQ(y3));
    
    l = (c * e - b * f) / (e * a - b * d);
    m = (d * c - a * f) / (d * b - e * a);
    
    n = -1 * (SQ(x1) + SQ(y1) + l * x1 + m * y1);
    
    xp = l / -2.0;
    yp = m / -2.0;
    r = sqrt(SQ(l) + SQ(m) - 4 * n) / 2.0;
    
    printf("%.3f %.3f %.3f\n", xp, yp, r);
  }
  return 0;
}