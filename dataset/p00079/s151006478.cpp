#include <complex>
#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef complex<double> xy_t;
double dot_product(xy_t a, xy_t b);
double cross_product(xy_t a, xy_t b);
xy_t P[110];

int main(){
  int N = 0;
  double x,y;
  while(~scanf("%lf,%lf", &x, &y)){
    P[N++] = xy_t(x,y);
  }
  double sum = 0;
  for (int i=0; i+2<N; ++i){
    xy_t a=P[0], b=P[i+1], c=P[i+2];
    sum += cross_product(b-a, c-a)/2;
  }
  printf("%.6f\n", abs(sum));
}



double dot_product(xy_t a, xy_t b){
  return (conj(a)*b).real();
}
double cross_product(xy_t a, xy_t b){
  return (conj(a)*b).imag();
}