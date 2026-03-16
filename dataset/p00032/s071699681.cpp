#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int a,b,c;
  int h=0, t=0;
  while(scanf("%d,%d,%d",&a,&b,&c)==3) {
    if (a==b) h++;
    if (a*a+b*b==c*c) t++;
  }
  printf("%d\n%d\n",t,h);
}