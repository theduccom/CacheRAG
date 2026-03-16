#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  double mn = 1000000, mx = -1;
  double tmp;
  while (scanf("%lf ", &tmp) == 1) {
    mn = min(mn, tmp);
    mx = max(mx, tmp);
  }
  printf("%lf\n", mx - mn);
}