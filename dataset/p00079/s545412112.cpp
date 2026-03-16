#include <complex.h>
#include <cmath>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b) {
  return (conj(a)*b).real();
}

double cross_product(xy_t a, xy_t b) {
  return (conj(a)*b).imag();
}

int main() {
  xy_t P[110];
  int N = 0;
  double x, y;
  
  while(scanf("%lf,%lf", &x, &y)!= EOF) {
    xy_t entry(x,y);
    P[N++] = entry;
  }

  //center all coordinates based on first element
  for (int i = 1; i < N; i++) {
    P[i] -= P[0];
  }
  
  //calculate sum
  double sum = 0.0;
  for (int i = 1; i+1 < N ; i++) {
    xy_t  a = P[i] , b = P[i + 1];
    sum += cross_product(a, b) / 2.0;
  }

  printf("%.6f\n", abs(sum));
  
}