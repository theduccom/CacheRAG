#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x, h;
  double s, r;
  while (1){
    cin >> x >> h;
    if (x == 0){
      break;
    }
    s = x * x;
    r = (x / 2.0) * (x / 2.0) + h * h;
    r = sqrt(r);
    s += 2.0 * (r * x);
    printf("%f\n", s);
  }

  return 0;
}
    