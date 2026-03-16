#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int x, h;
  while(scanf("%d%d", &x, &h) && (x | h)) {
    double m = sqrt(h*h + x*x/2.0);
    double s = (m*2+x)/2.0;
    double S = sqrt(s*(s-m)*(s-m)*(s-x));
    printf("%.10f\n", 4*S + x*x);
  }
}