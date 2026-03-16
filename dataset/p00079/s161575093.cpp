#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)n;++i)

using namespace std;

using ld = long double;
using P = complex<ld>;
using VP = vector<P>;

ld cross (P a, P b) { return imag(conj(a) * b); }

ld area(const VP &p) {
  ld res = 0;
  int n = p.size();
  REP(j,n) res += cross(p[j], p[(j+1)%n]);
  return abs(res / 2);
}

int main() {
  VP vp;
  double x, y;
  while(scanf("%lf,%lf\n", &x, &y) != EOF) {
    vp.emplace_back(x, y);
  }
  cout << setprecision(10) << fixed << area(vp) << endl;
  return 0;
}