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

int main() {
  int n;
  while(cin >> n,n) {
    int a[10] = {};
    REP(i,n) {
      int b;
      cin >> b;
      a[b]++;
    }
    REP(i,10) {
      if (a[i]) {
        cout << string(a[i],'*') << endl;
      } else
        cout << "-" << endl;
    }
  }
}