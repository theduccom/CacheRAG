#include <complex>
#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef complex<double> xy_t;
double size(xy_t a, xy_t b, xy_t c);

/*
int main(){
  xy_t P(-2, 1), Q;
  cout << P << endl;
  cout << P.real() << endl;
  cout << P.imag() << endl;
  Q = P + xy_t(5, -2);
  //Q *= xy_t(cos(a). sin(a));
  cout << abs(P) << endl;
  cout << norm(P) << endl;
}
*/

xy_t P[110];
int main(){
  int N=0;
  double x,y;
  while (~scanf("%lf,%lf", &x, &y)){
    P[N++] = xy_t(x,y);
  }
  double sum = 0.0;
  for (int i=0; i+2<N; ++i){
    xy_t a=P[0], b=P[(i+1)%N], c=P[(i+2)%N];
    sum += size(a, b, c);
  }
  printf("%.6f\n", sum);
}

double size(xy_t a, xy_t b, xy_t c){
  double l1,l2,l3;
  l1 = abs(a-b);
  l2 = abs(b-c);
  l3 = abs(c-a);
  double z = (l1+l2+l3)/2;
  double s = sqrt(z*(z-l1)*(z-l2)*(z-l3));
  return s;
}