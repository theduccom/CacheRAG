#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
int main() {
 int N=0;
 double x, y;
 while (~scanf("%lf,%lf", &x, &y)) {
  P[N++] = xy_t(x, y);
 }
 double sum = 0.0;
 for (int i=0; i+2<N; ++i) {
  xy_t a=P[0], b=P[(i+1)%N], c=P[(i+2)%N];
  double A=abs(a-b), B=abs(b-c), C=abs(c-a);
  double z=(A+B+C)/2;
  sum += sqrt(z*(z-A)*(z-B)*(z-C));
 }
 printf("%.6f\n", abs(sum));
}
