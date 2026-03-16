#include <cstdio>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> Point;

#define X real()
#define Y imag()
#define PI 3.1415926535

Point ans;
Point v = Point(0, 1);

int main() {
  while (1) {
    int a, b;
    scanf("%d,%d", &a, &b);
    if (a == 0 && b == 0) break;
    ans += double(a) * v;

    double t = double(-b)*PI/180;
    v *= Point(cos(t), sin(t));
  }

  printf("%d\n", int(ans.X));
  printf("%d\n", int(ans.Y));
}