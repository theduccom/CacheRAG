#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <string>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  string s;
  int ans = 0;
  while(cin>>s) {
    string a(s);
    reverse(ALL(s));
    if (a == s)
      ans++;
  }
  cout << ans << endl;
}