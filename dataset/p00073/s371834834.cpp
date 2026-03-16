#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int x, h;
  
  while (cin >> x >> h, x + h){
    double s = 0;
    s += x * x * 1.0;
    double y = sqrt(pow(x / 2.0, 2.0) + pow((double)h, 2.0));
    s += (y * x) / 2.0 * 4.0;
    printf("%.10f\n", s);
  }
  return (0);
}