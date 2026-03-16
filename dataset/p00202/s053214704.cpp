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

vector<int> eratosthenes(int n) {
  vector<int> v(n);
  for (int i=2; i<n; i++) v[i] = i;
  for (int i=2; i*i<n; i++)
    if (v[i])
      for (int j=i*i; j<n; j+=i)
        v[j] = 0;
//  v.erase(remove(ALL(v),0),v.end()); // ツつアツつアツづーツづつつッツづェツづ篠素ツ青板δ環スツト
  return v;
}

int main() {
  vector<int> prime =  eratosthenes(1000000);
  int n,x;
  while(cin >> n >> x, n||x) {
    int a[n];
    REP(i,n) {
      cin >> a[i];
    }
    bool dp[x+1];
    memset(dp,0,sizeof(dp));
    dp[0] = true;
    for (int i=1; i<=x; ++i) {
      REP(j,n) {
        if (i-a[j] >= 0 &&dp[i-a[j]]) {
          dp[i] = true;
          break;
        }
      }
    }
    int i;
    for (i = x; i>=0; --i) {
      if (prime[i] &&dp[i]) {
        cout << i << endl;
        break;
      }
    }
    if (i<0) {
      cout << "NA" << endl;
    }
  }
}