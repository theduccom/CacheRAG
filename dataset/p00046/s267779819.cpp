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
  double h;
  vector<double> v;
  while(cin >> h) {
    v.push_back(h);
  }
  cout << *max_element(ALL(v)) - *min_element(ALL(v)) << endl;
}