#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

#define pci pair<char,int>
int main() {
  map<char,int> hoge;
  hoge.insert(pci('I',1));
  hoge.insert(pci('V',5));
  hoge.insert(pci('X',10));
  hoge.insert(pci('L',50));
  hoge.insert(pci('C',100));
  hoge.insert(pci('D',500));
  hoge.insert(pci('M',1000));

  string s;
  while(cin >> s) {
    vector<int> v;
    REP(i,s.length()) {
      v.push_back((*hoge.find(s[i])).second);
    }
    int ans = 0;
    REP(i,v.size()) {
      if (i<v.size()-1 && v[i]<v[i+1])
        ans -= v[i];
      else
        ans += v[i];
    }
    cout << ans << endl;
  }
}