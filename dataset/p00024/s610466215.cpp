#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  double v;
  while(cin>>v) {
    double x = v*v/2/9.8;
    cout << ceil(x/5)+1 << endl;
  }
}