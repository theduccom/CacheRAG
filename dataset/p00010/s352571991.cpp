#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <ctime>
#include <iostream>
#include <functional>
#include <complex>
#include <iomanip>
#pragma comment(linker, "/STACK:836777216")

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef pair<pii, int> p3i;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<p3i> v3i;
typedef vector<vii> vvii;
typedef vector<p3i> vp3i;
typedef long double ld;
typedef vector<ld> vld;

#define pb push_back
#define mp make_pair
#define REP(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define REPD(i, n) for (int (i) = (n) - 1; (i) >= 0; (i)--)
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define FORD(i,a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define sz(v) (int)(v).size()
#define all(v) (v).begin(), (v).end()
#define rv(v) reverse(all(v))
#define CL(v, val) memset((v), (val), sizeof((v)))
#define SORT(a) sort(all(a))
#define un(v) SORT(v), (v).resize(unique(all(v)) - (v).begin())
#define eps 1.0e-7
#define X first
#define Y second
#define bit(n) (1 << (n))
#define bit64(n) (ll(1) << (n))
#define sqr(n) ((n) * (n))

double x[3], y[3];
double l[3];

double GetDist(int a, int b) {
  return sqrt(sqr(x[a] - x[b]) + sqr(y[a] - y[b]));
}

int main(void) {
  int n;
  scanf("%d", &n);
  REP(i, n) {
    REP(j, 3) {
      scanf("%lf%lf", &x[j], &y[j]);
    }

    double D = 2 * (x[0] * (y[1] - y[2]) + x[1] * (y[2] - y[0]) + x[2] * (y[0] - y[1]));
    double xc = 1.0 / D * ((sqr(x[0]) + sqr(y[0])) * (y[1] - y[2]) + (sqr(x[1]) + sqr(y[1])) * (y[2] - y[0]) + (sqr(x[2]) + sqr(y[2])) * (y[0] - y[1]));
    double yc = 1.0 / D * ((sqr(x[0]) + sqr(y[0])) * (x[2] - x[1]) + (sqr(x[1]) + sqr(y[1])) * (x[0] - x[2]) + (sqr(x[2]) + sqr(y[2])) * (x[1] - x[0]));

    double p = 0;
    REP(j, 3) {
      l[j] = GetDist(j, (j + 1) % 3);
      p += l[j];
    }

    p /= 2;

    double r = 1;
    double z = p;
    REP(j, 3) {
      r *= l[j];
      z *= (p - l[j]);
    }

    r = r / (4 * sqrt(z));

    printf("%.3lf %.3lf %.3lf\n", xc, yc, r);


  }
  return 0;
}