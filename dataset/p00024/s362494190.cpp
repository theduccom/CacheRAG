#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  double v;
  while (~scanf("%lf", &v)) {
    double n = (4.9 * (v / 9.8) * (v / 9.8) + 5) / 5;
    printf("%d\n", (int)ceil(n));
  }
}
