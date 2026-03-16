#include <bits/stdc++.h>
using namespace std;

int main(){
  double x,h;
  while(cin>>x>>h&&x){
    double a=x*x;
    a+=sqrt(h*h+a/4)*x*2;
    printf("%f\n",a);
  }
  return 0;
}