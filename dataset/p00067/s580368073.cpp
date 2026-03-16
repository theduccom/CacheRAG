#include <iostream>
#include <string>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

string s[12];

const int di[4] = {-1, 1, 0, 0}, dj[4] = {0, 0, -1, 1};
void dfs(int i, int j) {
  if (s[i][j] == '0') return;
  s[i][j] = '0';
  rep(z,4) {
    int ti = i + di[z], tj = j + dj[z];
    if (ti < 0 || tj < 0 || ti >= 12 || tj >= 12) continue;
    if (s[ti][tj] == '1') dfs(ti, tj);
  }
}

void solve() {
  REP(i,1,12) cin>>s[i];
  
  int res = 0;
  rep(i,12) rep(j,12) if (s[i][j] == '1') {
    res++; dfs(i,j);
  }
  cout<<res<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>s[0]) {
    solve();
  }
  return 0;
}