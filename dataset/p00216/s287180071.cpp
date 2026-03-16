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
  int w;
  while(cin>>w,w!=-1) {
    int res = 1150;
    REP(i,w+1) {
      if (i>10 && i<=20) res += 125;
      else if (i>20 && i<=30) res += 140;
      else if (i>30) res += 160;
    }
    cout << 4280 - res << endl;
  }
}