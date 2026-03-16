// includes
#include <cstdio>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <functional>
#include <cmath>
#include <climits>
#include <bitset>

// macros
#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue
#define FOR(i, a, b) for(int i=(a); i<(b);++i)
#define rep(i, n) FOR(i, 0, n)

using namespace std;

//  types
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
typedef pair<ll, ll> Pll;
 
// constants
const int inf = 1e9;
const ll linf = 1LL << 50;
const double EPS = 1e-10;

// solve

int main(int argc, char const* argv[])
{
  int n;
  cin >> n;
  rep(i, n){
    double x[3], y[3];
    rep(j, 3){
      cin >> x[j] >> y[j];
    }
    int tmp = 0;
    while(x[tmp] == x[(tmp + 1) % 3] || x[tmp] == x[(tmp + 2) % 3]){
      swap(x[0], x[tmp]);
      swap(y[0], y[tmp]);
      tmp++;
    }
    double yc = (((x[0] - x[2]) * (x[0] * x[0] + y[0] * y[0] - x[1] * x[1] - y[1] * y[1])) \
                - ((x[0] - x[1]) * (x[0] * x[0] + y[0] * y[0] - x[2] * x[2] - y[2] * y[2]))) \
                / ((x[0] - x[2]) * (y[0] - y[1]) - (x[0] - x[1]) * (y[0] - y[2])) / 2.;
    double xc = (((y[0] - y[2]) * (x[0] * x[0] + y[0] * y[0] - x[1] * x[1] - y[1] * y[1])) \
                - ((y[0] - y[1]) * (x[0] * x[0] + y[0] * y[0] - x[2] * x[2] - y[2] * y[2]))) \
                / ((y[0] - y[2]) * (x[0] - x[1]) - (y[0] - y[1]) * (x[0] - x[2])) / 2.;
    cout << setprecision(3) << fixed;
    cout << xc << " " << yc << " ";
    cout << sqrt((x[0] - xc) * (x[0] - xc) + (y[0] - yc) * (y[0] - yc)) << endl;
  }
	return 0;
}

