#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;

int main() {
  ll n;
  while(cin>>n,n) {
    int ans = 0;
    for (ll i = 5; i<=n; i*=5)
      ans += n/i;
    cout << ans << endl;
  }

}