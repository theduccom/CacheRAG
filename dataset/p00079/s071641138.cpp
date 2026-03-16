#include <cmath>
#include <cstdio>
#include <cstring>
#include <utility>
#include <vector>

using namespace std;
using P = pair<double, double>;

inline double dist(P s, P t) {
  return sqrt(pow((s.first - t.first), 2) + pow((s.second - t.second), 2));
}

inline double S(double a, double b, double c) {
  double z = (a + b + c) / 2;
  return sqrt(z * (z - a) * (z - b) * (z - c));
}

int main() {
  char line[128];
  double x, y;
  vector<P> ps;
  while (scanf("%lf,%lf", &x, &y) != EOF) {
    ps.push_back({x, y});
  }
  size_t sz = ps.size();
  P c;
  for (int i = 0; i < 3; ++i) {
    c.first += ps[i].first;
    c.second += ps[i].second;
  }
  c.first /= 3;
  c.second /= 3;
  double ans = 0;
  for (int p1 = 0, p2 = 1; p1 < sz; ++p1, p2 = (p2 + 1) % sz) {
    ans += S(dist(ps[p1], ps[p2]), dist(ps[p1], c), dist(ps[p2], c));
  }
  printf("%.7lf\n", ans);
}