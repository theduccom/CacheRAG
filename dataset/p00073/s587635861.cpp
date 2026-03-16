#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double x,h;
  cin >> x >> h;
  while(x != 0 && h != 0){
    double hi = sqrt((x*0.5)*(x*0.5)+h*h);
    printf("%.6lf\n",x*x + 2.0*(hi*x));
    cin >> x >> h;
  }
  return (0);
}