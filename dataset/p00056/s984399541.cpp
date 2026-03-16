#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  vector<int> table(50000,1);
  table[0] = table[1] = 0;
  for(int i=2; i*i<50000; i++)
    if(table[i])
      for(int j=i*2; j<50000; j+=i)
        table[j] = 0;
  vector<int> pr;
  REP(i,50000)
    if(table[i])
      pr.push_back(i);
  int n;
  while(cin>>n,n) {
    int ans=0;
    for(int i=0; pr[i]<=n/2; i++) {
      if (table[n-pr[i]]) ans++;
    }
    cout << ans << endl;
  }
}