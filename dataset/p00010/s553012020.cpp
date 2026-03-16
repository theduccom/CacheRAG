#include <cstdio>
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <complex>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef complex<double> P;
const double PI = 3.141592653589793238462643383279502884L;
const int LARGE_PRIME = 1000000007;

#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rtr(c, i) for(auto i = (c).rbegin(); i != (c).rend(); i++)
#define repfn(i,a,cont,next) \
  for(auto i = (a); [=](){return(cont);}(); i = [=](){return(next);}())
#define repby(i,a,b,step) repfn(i, a, i < b, i + step)
#define repab(i,a,b) repby(i, (a), (b), 1)
#define rep(i,n) repab(i, 0, (n))
#define pb push_back
#define sz(c) int((c).size())

int main(int argc, char **argv)
{
  int n;
  double x, y;
  cin >> n;

  while (n--) {
    cin >> x >> y;
    P p(x, y);
    cin >> x >> y;
    P q(x, y);
    cin >> x >> y;
    P r(x, y);

    double eA = norm(q - r);
    double eB = norm(r - p);
    double eC = norm(p - q);

    P c = (eA*(eB+eC-eA)*p + eB*(eC+eA-eB)*q + eC*(eA+eB-eC)*r)
          / (eA*(eB+eC-eA) + eB*(eC+eA-eB) + eC*(eA+eB-eC));

    printf("%.3f %.3f %.3f\n", c.real(), c.imag(), abs(p - c));

  }
  return 0;
}