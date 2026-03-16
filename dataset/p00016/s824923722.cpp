#include <cmath>
#include <cstdio>

using namespace std;

double deg2rad(int degree) {
  return degree / 360.0 * 2 * M_PI;
}

int main() {
  double x = 0, y = 0;
  int length, degree;
  int direction = 90;

  while (true) {
    scanf("%d,%d", &length, &degree);
    if (length == 0 && degree == 0) { break; }

    double rad = deg2rad(direction);
    x -= length * cos(rad);
    y += length * sin(rad);

    direction += degree;
  }

  printf("%d\n%d\n", static_cast<int>(x), static_cast<int>(y));

  return 0;
}