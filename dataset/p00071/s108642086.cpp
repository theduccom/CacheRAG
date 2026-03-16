#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

string s[8];
int z;
const int dx[12] = {0,  0,  0, 1, 2, 3, 0, 0, 0, -1, -2, -3};
const int dy[12] = {-1,-2, -3, 0, 0, 0, 1, 2, 3, 0, 0, 0};

void dfs(int x, int y) {
  s[y][x] = '0';
  rep(zz,12) {
    int tx = x + dx[zz], ty = y + dy[zz];
    if (tx < 0 || ty < 0 || tx >= 8 || ty >= 8) continue;
    if (s[ty][tx] == '1') dfs(tx, ty);
  }
}

void solve() {
  int bx, by;
  rep(i,8) cin>>s[i];
  cin>>bx>>by;
  bx--; by--;
  
  dfs(bx, by);
  cout<<"Data "<<z<<":"<<endl;
  rep(i,8) cout<<s[i]<<endl;
}

int main (int argc, char const* argv[]) {
  int n; cin>>n;
  for(z=1;z<=n;z++) solve();
  return 0;
}