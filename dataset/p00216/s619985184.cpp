#include <iostream>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int past = 4280, w;

int solve() {
  int res = 4280 - 1150;
  
  if (w >= 10 && w < 20) {
    REP(i,10,w) res -= 125;
  }
  else if (w >= 20 && w < 30) {
    res -= 1250;
    REP(i,20,w) res -= 140;
  }
  else if (w >= 30) {
    res -= (1250 + 1400);
    REP(i,30,w) res -= 160;
  }
  return res;
}

int main (int argc, char const* argv[]) {
  while (cin>>w) {
    if (w == -1) break;
    cout<<solve()<<endl;;
  }
  return 0;
}