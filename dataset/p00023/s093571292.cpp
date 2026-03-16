#include <cstdio>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> Point;

#define X real()
#define Y imag()

int n;
Point ps[2];
double rs[2];

int main() {
  scanf("%d", &n);
  while (n--) {
    for (int i=0; i<2; i++) {
      double x, y;
      scanf("%lf%lf%lf", &x, &y, &rs[i]);
      ps[i] = Point(x, y);
    }

    Point dp = ps[0]-ps[1];
    double d = sqrt(dp.X*dp.X+dp.Y*dp.Y);
    if (d > rs[0]+rs[1]) puts("0");
    else if (rs[1] > rs[0] + d) puts("-2");
    else if (rs[0] > rs[1] + d) puts("2");
    else puts("1");
  }
}