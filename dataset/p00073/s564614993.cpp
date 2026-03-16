#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

  int x, h;
  double s;

  while(cin >> x >> h){
    if(x == 0) break;
    s = 2.0 * x * sqrt(0.25 * x * x + h * h);
    s += (double)x * x;
    printf("%lf\n", s);
  }

  return 0;

}