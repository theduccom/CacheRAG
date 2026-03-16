#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double surfaceArea(double x, double h)
{
  return x*x + x*sqrt(4*h*h+x*x);
}

int main()
{
  int x, h;

  while(cin>>x>>h && x != 0 && h != 0){
    printf("%.6lf\n", surfaceArea((double)x, (double)h));
  }

  return 0;
}