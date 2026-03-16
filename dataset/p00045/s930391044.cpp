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
  int a,b;
  int i=0;
  long long sum=0;
  double ave = 0;
  while(scanf("%d,%d", &a, &b)==2) {
    sum += a*b;
    ave += b;
    i++;
  }
  cout << sum << endl;
  cout << (int)(ave/i+0.5) << endl;
}