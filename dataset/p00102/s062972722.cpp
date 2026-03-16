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
  int n;
  while(cin>>n,n) {
    int a[n+1][n+1];
    REP(y,n) {
      int sum=0;
      REP(x,n) {
        cin >> a[x][y];
        sum += a[x][y];
      }
      a[n][y] = sum;
    }
    int sum2 = 0;
    REP(x,n) {
      int sum =0;
      REP(y,n) {
        sum+=a[x][y];
      }
      a[x][n] = sum;
      sum2+=sum;
    }
    a[n][n] = sum2;
    REP(y,n+1) {
      REP(x,n+1) {
        printf("%5d",a[x][y]);
      }
      cout << endl;
    }
  }
}