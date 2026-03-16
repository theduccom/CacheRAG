#include <complex.h>
#include <math.h>
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

double triangle_area(xy_t a, xy_t b) {
  return abs(cross_product(a, b) / 2.0);
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

  /*for (int i =0; i < N; i++) {
    cout << " x: " << P[i].real() << " y: " << P[i].imag() << endl;
    }*/
    
  //calculate sum
  double sum = 0.0;
  for (int i = 0; i+2 < N ; i++) {
    xy_t  b = P[i + 1] , c = P[i + 2];
    sum += triangle_area(b, c);
  }

  printf("%.6f\n", sum);
  
}