#include <iostream>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

int n;

const char mes[3] = {'A', 'B', 'C'};

void solve() {
  rep(i,n) {
    int pm, pe, pj; cin>>pm>>pe>>pj;
    double avg = (pm+pe+pj)/3.0;
    int res;
    if (pm == 100 || pe == 100 || pj == 100) {
      res = 0;
    } else if ((pm+pe)/2.0 >= 90.0) {
      res = 0;
    } else if (avg >= 80.0) {
      res = 0;
    } else if (avg >= 70.0) {
      res = 1;
    } else if (avg >= 50.0 && (pm >= 80 || pe >= 80)) {
      res = 1;
    } else {
      res = 2;
    }
    cout<<mes[res]<<endl;
  }
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}