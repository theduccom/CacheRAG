#include <cmath>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
    double distance = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
    if (distance > r1 + r2) {
      puts("0");
    } else if (distance + r2 < r1) {
      puts("2");
    } else if (distance + r1 < r2) {
      puts("-2");
    } else {
      puts("1");
    }
  }

  return 0;
}