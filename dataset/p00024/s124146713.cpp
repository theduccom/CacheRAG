#include <cstdio>
#include <cmath>
using namespace std;

double v;

int main() {
  while (1) {
    if (scanf("%lf", &v) != 1) return 0;
    
    int n = 1;
    while (1) {
      double h = 5*n-5;
      if (sqrt(h/4.9)*9.8 >= v) break;
      ++n;
    }

    printf("%d\n", n);
  }
}