#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define rep(i, n)      for (int i=0; i<int(n); i++)
#define rep3(i, s, n)  for (int i=int(s); i<int(n); i++)
#define rev_rep(i, n)  for (int i=int(n)-1; i>=0; i-=1)

int N;
int epsilon = numeric_limits<double>::epsilon();
bool a_lt_b(double a, double b) {
  return (b - a) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon * epsilon);
}

int main() {
  cin >> N;
  rep(i, N) {
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double dist_p = (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
    int ans = 1;
    if (a_lt_b((ra+rb)*(ra+rb), dist_p)) ans = 0;
    if (ra > rb && a_lt_b(dist_p, (ra-rb)*(ra-rb))) ans =  2;
    if (ra < rb && a_lt_b(dist_p, (rb-ra)*(rb-ra))) ans = -2;
    cout << ans << "\n";
  }
  return 0;
}