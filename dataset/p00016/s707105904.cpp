#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int step;
  int direction;
  double x = 0;
  double y = 0;
  int dir = 90;
  while (scanf("%d,%d\n", &step, &direction) != EOF) {
    double angle = dir * 3.1415926535 / 180;
    x += step * cos(angle);
    y += step * sin(angle);
    dir -= direction;
  }
  printf("%d\n", (int)x);
  printf("%d\n", (int)y);

  return 0;
}