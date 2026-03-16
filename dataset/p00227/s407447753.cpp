#include <iostream>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int n, m, p[1001];

void solve() {
  rep(i,n) cin>>p[i];
  
  int rest = n, res = 0;
  while (rest >= m) {
    rep(z,m-1) {
      int l, most = 0;
      rep(i,n) if (most < p[i]) {
        l = i; most = p[i];
      }
      res += p[l]; p[l] = -1; rest--;
    }
    int l, most = 0;
    rep(i,n) if (most < p[i]) {
      l = i; most = p[i];
    }
    p[l] = -1; rest--;
  }
  
  rep(i,n) if (p[i] != -1) {
    res += p[i];
  }
  cout<<res<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n>>m, n||m) {
    solve();
  }
  return 0;
}