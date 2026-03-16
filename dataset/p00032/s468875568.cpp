#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lli;
 
int main() {
  lli a, b, c;
  int re, hi;
  re = hi = 0;
  while(scanf("%lld,%lld,%lld", &a, &b, &c) != EOF) {
    if(a*a+b*b == c*c) ++re;
    if(a == b) ++hi;
  }
  cout << re << endl;
  cout << hi << endl;
  return 0;
}