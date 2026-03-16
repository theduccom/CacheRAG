#include <cstdio>
using namespace std;

double a;

int main() {
  while (1) {
    if (scanf("%lf", &a) != 1) return 0;
  
    double ans = a;
    for (int i=0; i<9; i++) {
      if (i%2 == 0) a *= 2;
      else a /= 3;
      ans += a;
    }
    printf("%f\n", ans);
  }
}