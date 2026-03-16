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
const int INF = 1<<30;

typedef pair<int, int> pii;
int main() {
  int n;
  while(cin>>n,n) {
    int ma = 0, p;
    REP(i,n) {
      int a,d1,d2;
      cin >> a >> d1 >> d2;
      if (ma < d1 + d2) {
        ma = d1 + d2;
        p = a;
      }
    }
    cout << p << " " << ma << endl;
  }
}