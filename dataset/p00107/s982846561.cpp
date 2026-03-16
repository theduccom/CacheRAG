#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back

int t, y, h, n;

void solve() {
  vector<int> s;
  s.pb(t); s.pb(y); s.pb(h);
  sort(s.begin(), s.end());
  double d1 = s[0] / 2.0;
  double d2 = s[1] / 2.0;
  cin>>n;
  rep(i,n) {
    double r; cin>>r;
    if (r*r > d1*d1 + d2*d2) {
      cout<<"OK"<<endl;
    } else {
      cout<<"NA"<<endl;
    }
  }
}

int main (int argc, char const* argv[]) {
  while (cin>>t>>y>>h, t||y||h) {
    solve();
  }
  return 0;
}