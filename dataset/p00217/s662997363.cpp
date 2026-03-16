#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)
int n;
void solve() {
  int mp = -1, md = 0;
  rep(i,n) {
    int p, d1, d2; cin>>p>>d1>>d2;
    if (d1+d2 > md) {
      md = d1 + d2; mp = p;
    }
  }
  cout<<mp<<" "<<md<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}