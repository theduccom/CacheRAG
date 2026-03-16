#include <complex>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

typedef long double ldb;
typedef complex<ldb> P;

ldb eps = 1e-8;
// 誤差を考慮した比較 sig(a-b) のように使う
// ret<0 なら a<b, ret>0 なら a>b, ret=0 なら a=b
int sig(ldb a) {return (a<-eps)?-1:(a>eps)?1:0;}
// 誤差を考慮した比較
bool eq(ldb a,ldb b){return abs(a-b)<eps;}
// 内積
ldb dot(P a, P b) {
  return (a.real() * b.real() + a.imag() * b.imag());
}
// 外積
ldb cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

// 多角形の面積
ldb area(vector<P> g) {
  ldb res = 0.0;
  for(int i = 0; i < int(g.size()); i++) {
    res += cross(g[i], g[(i+1)%(g.size())])/2;
  }
  return abs(res);
}

int main(void)
{
  vector<P> g;
  double a,b;
  while(scanf("%lf,%lf",&a,&b) == 2) {
    g.push_back(P(a,b));
  }
  printf("%Lf\n",area(g));
  return 0;
}