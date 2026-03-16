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
  int x;
  char str[2];
  int a=0,b=0,o=0,ab=0;
  while(scanf("%d,%s\n",&x,str)==2) {
    string s(str);
    if (s == "A") a++;
    if (s=="B") b++;
    if (s=="O") o++;
    if (s=="AB") ab++;
  }
  printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
}