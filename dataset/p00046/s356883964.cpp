#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  double n, h = 0.0, l = 999999.0;

  while (cin >> n){
    h = max(h, n);
    l = min(l, n);
  }

  printf("%.1lf\n", h - l);
}