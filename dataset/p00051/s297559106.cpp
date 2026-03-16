#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstdlib>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int n;
  cin >> n;
  while(n--) {
    string x;
    cin >> x;
    vector<int> v;
    REP(i,8)
      v.push_back(x[i]-'0');
    sort(ALL(v));
    vector<int> vv;
    do {
      string s;
      REP(i,8) {
        s[i] = (char)(v[i]+'0');
      }
      vv.push_back(atoi(s.c_str()));
    }while(next_permutation(ALL(v)));
    cout << *max_element(ALL(vv))-*min_element(ALL(vv)) << endl;
  }
}