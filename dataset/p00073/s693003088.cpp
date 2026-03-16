#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(){
  while(true)
  {
    double x, h;
    cin >> x >> h;
    if(!x && ! h)
      break;
    double hh =	sqrt(h * h + (x / 2) * (x / 2));
    printf("%lf\n", x * x +  x * hh / 2.0 * 4.0);
  }
  return 0;
}