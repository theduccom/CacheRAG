#include <cstdio>
#include <cmath>
#define PI 3.141592653589
using namespace std;

int main() {
  int d, a;
  double angle = 0.0, x = 0.0, y = 0.0;
  while (true) {
    scanf("%d,%d", &d, &a);
    if (d == 0 && a == 0) break;
    double rad = angle * PI / 180.0;
    x += d * sin(rad);
    y += d * cos(rad);
    angle += a;
  }
  printf("%d\n%d\n", (int)x, (int)y);
}
