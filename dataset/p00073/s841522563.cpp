#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  double x,h;
  while(cin>>x>>h,x){
    double tri=sqrt(h*h+x*x/4.0)*x/2.0;
    printf("%.6f\n",tri*4.0+x*x);
  }
}