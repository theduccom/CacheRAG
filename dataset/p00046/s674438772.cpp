#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  double h;
  scanf("%lf", &h);
  double a = h, i = h;
  while (scanf("%lf", &h) == 1) {
    a = max(a, h);
    i = min(i, h);
  }
  printf("%f\n", a - i);
  return 0;
}