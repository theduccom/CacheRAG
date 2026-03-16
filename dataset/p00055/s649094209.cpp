#include <cstdio>

using namespace std;

int main() {
  double a;
  while (scanf("%lf", &a) == 1) {
    double s = a;
    for (int i = 2; i <= 10; i++) {
      if (i % 2)
        a /= 3;
      else
        a *= 2;
      s += a;
    }
    printf("%.8f\n", s);
  }
  return 0;
}