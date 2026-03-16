#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;

int main() {
  int n;
  while(cin >> n, n) {
    int f=0;
    vector<ll> sum(4001);
    vector<int> ff(4001);
    REP(i,n) {
      ll a,b,c;
      cin >> a>>b>>c;
      sum[a] += b*c;
      if (ff[a]==0&&sum[a]>=1000000) {
        ff[a]++;
        if (f==0)
          f=1;
        cout << a << endl;
      }
    }
    if (f==0)
      cout << "NA" << endl;
  }
}