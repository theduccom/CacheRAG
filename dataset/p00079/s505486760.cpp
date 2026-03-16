#include <cstdio>
#include <algorithm>
#include <complex>
#include <vector>
#include <cmath>
using namespace std;
typedef complex<double> P;

double cross(P a, P b) {
  return a.real()*b.imag() - a.imag()*b.real();
}

int main() {
  vector<P> g;
  double x, y;
  while(scanf("%lf,%lf", &x, &y) != EOF) {
    g.push_back(P(x,y));
  }
  int N = g.size();
  double S = 0;
  for(int i = 0; i < N; ++i) {
    S += cross(g[i], g[(i+1)%N]);
  }
  printf("%.10f\n", abs(S)/2.0);
  return 0;
}