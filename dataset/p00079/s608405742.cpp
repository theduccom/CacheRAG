#if 0

#endif
#include <iostream>
#include <cstdio>
#include <vector>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
int main(){
  vector<xy_t> p;
  p.reserve(20);
  double x, y;
  while(scanf("%lf,%lf", &x, &y) != EOF){
    p.push_back(xy_t(x,y));
  }

  double sum = 0.0;
  for(int i = 0; i+2 < p.size(); i++){
    xy_t a = p[0], b = p[i+1], c = p[i+2];
    sum += cross_product(b-a, c-a) / 2.0;
  }

  printf("%.6f\n", abs(sum));
}