#include <cstdio>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> Point;

#define X real()
#define Y imag()

int n;
double ans;
Point ps[1000000];

double cross(Point a, Point b) {
  return (conj(a)*b).Y;
}

int main() {
  for (n=0; ; n++) {
    double x, y;
    if (scanf("%lf,%lf", &x, &y) != 2) break;
    ps[n] = Point(x, y);
  }

  for (int i=1; i<n-1; i++) {
    ans += abs(cross(ps[i+1]-ps[0], ps[i]-ps[0]));
  }

  printf("%f\n", ans/2);
}