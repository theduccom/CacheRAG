#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
  double a,b;
  while(cin >>a>>b,a||b){
    double x;
    x = sqrt(b*b+a*a/4);
    printf("%.6lf\n",a*a+x*a*2);
  }
  return 0;
}