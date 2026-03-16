#include <cstdio>
#include <cmath>
using namespace std;

double x, h;

int main() {
  while (1) {
    scanf("%lf", &x);
    scanf("%lf", &h);
    if (x == 0.0 && h == 0.0) return 0;

    printf("%f\n", x*x+x*sqrt(h*h+(x*x/4))*2);
  }
}