#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  double l[10];
  double v1, v2;
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)==12) {
    double dis = 0;
    REP(i,10)
      dis += l[i];
    double t = dis/(v1+v2);
    double x = v1 * t;
    int j = 0;
    for (int i=0; i<10; i++) {
      j+=l[i];
      if (j>=x) {
        cout << i+1 << endl;
        break;
      }
    }
  }
}