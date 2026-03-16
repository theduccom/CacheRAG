#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

vector<int> primes(int n) {
  vector<int> v(n);
  for (int i=2; i<n; i++) v[i] = i;
  for (int i=2; i*i<n; i++)
    if (v[i])
      for (int j=i*2; j<n; j+=i)
        v[j] = 0;
  // v.erase(remove(ALL(v),0),v.end()); // ツつアツつアツづーツづつつッツづェツづ篠素ツ青板δ環スツト
  return v;
}

int main() {
  vector<int> pr = primes(10001);
  vector<int> tw(10001);
  for(int i = 5; i<10001; ++i) {
    if (pr[i] && pr[i-2]) tw[i] = i;
    else tw[i] = tw[i-1];
  }
  int n;
  while(cin >> n,n) {
    cout << tw[n]-2 << " " << tw[n] << endl;
  }
}