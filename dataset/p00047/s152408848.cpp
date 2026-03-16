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
  char a,b;
  int x[] = {1,0,0};
  while(scanf("%c,%c\n", &a,&b)==2) {
    swap(x[a-'A'], x[b-'A']);
  }
  REP(i,3)
    if (x[i])
      cout << (char)('A' + i) << endl;

}