
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <complex>

using namespace std;

int main()
{
  int N;
  scanf("%d ", &N);
  
  for (int i = 0; i < N; i++) {
    double xa, ya, ra, xb, yb, rb;
    scanf("%lf %lf %lf %lf %lf %lf ", &xa, &ya, &ra, &xb, &yb, &rb);
    complex<double> A(xa, ya), B(xb, yb);

    double k1 = fabs(ra - rb), k2 = ra + rb;
    double d = abs(A - B);
    int num;
    if (d < k1) {
      if (ra > rb) {
	num = 2;
      } else {
	num = -2;
      }
    } else if (k1 <= d && d <= k2) {
      num = 1;
    } else if (k2 < d) {
      num = 0;
    }
    
    printf("%d\n", num);
  }
  return 0;
}