#include <cstdio>
#include <cmath>
using namespace std;

#define EPS 1e-8

int n;
double r;
double ls[3];

int main() {
  while (1) {
    for (int i=0; i<3; i++) scanf("%lf", &ls[i]);
    if (ls[0] == 0.0) return 0;
  
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
      scanf("%lf", &r);
  
      bool found = false;
      for (int i=0; i<3; i++) {
        double d = ls[i]/2;
        if (2*sqrt(r*r-d*d)-EPS > ls[(i+1)%2]) {
          found = true;
          break;
        }
      }
  
      if (found) puts("OK");
      else puts("NA");
    }
  }
}