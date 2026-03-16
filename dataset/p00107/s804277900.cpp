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

int main() {
  vector<int> v(3);
  int n;
  while(cin>>v[0]>>v[1]>>v[2],v[0]+v[1]+v[2]) {
    cin >> n;
    sort(ALL(v));
    double d = sqrt(v[0]*v[0]+v[1]*v[1])/2;
    REP(i,n) {
      int r;
      cin >> r;
      if (d<r)
        cout << "OK";
      else
        cout << "NA";
      cout << endl;
    }
  }
}