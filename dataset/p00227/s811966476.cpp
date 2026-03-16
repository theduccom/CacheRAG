#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n,m;
  while(cin >> n >> m, n+m) {
    vector<int> a(n);
    REP(i,n) {
      cin >> a[i];
    }
    sort(ALL(a), greater<int>());
    int res = 0;
    int i;
    for (i=0; i+m<=n; i+=m) {
      REP(j,m-1) {
        res += a[i+j];
        //    cout << a[i+j] << "" ; 
      }
      //cout << endl;
    }
    //  cout << i << endl;
    if (i < n) {
      REP(j, n-i) {
        res += a[i+j];
        //  cout << a[i+j] << endl;
      }
    }
    cout << res << endl;
  }
}