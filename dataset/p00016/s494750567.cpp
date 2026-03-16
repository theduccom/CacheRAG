#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  double x = 0, y = 0, r = 0;
  int a, b;
  while (scanf("%d,%d", &a, &b) != EOF) {
    x += a * sin(r * M_PI / 180);
    y += a * cos(r * M_PI / 180);
    r += b;
  }
  printf("%d\n%d\n", (int) x, (int) y);
  return 0;
}