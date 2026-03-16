#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while (true) {
    double x, h;
    cin >> x >> h;
    if (x == 0)
      break;
    double a = x * x + 2 * x * sqrt(x * x / 4 + h * h);
    printf("%lf\n", a);
  }
}
