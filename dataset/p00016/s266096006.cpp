#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int n;
  double x, y, deg, rad;
  
  x = y = deg = rad = 0;
  while (1){
    scanf("%d,%lf", &n, &deg);
    if (n == 0 && deg == 0){
      break;
    }
    x += cos(rad) * n;
    y += sin(rad) * n;
    deg = deg / 180 * M_PI;
    rad += deg;
  }

  printf("%d\n%d\n",(int) y,(int) x);
  return 0;
}