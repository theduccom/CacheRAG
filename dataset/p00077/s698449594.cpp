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
  string s;
  while(cin>>s) {
    string ans;
    REP(i,s.length()) {
      if (s[i]=='@') {
        REP(j,s[i+1]-'0')
          ans += s[i+2];
        i += 2;
      } else {
        ans += s[i];
      }
    }
    cout << ans << endl;
  }
}