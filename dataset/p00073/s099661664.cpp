#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
double x,h;
int main(){
  while(cin>>x>>h){
    if(x==0&&h==0)break;
    printf("%.6f\n",x*x+4.0*(0.5*x*sqrt(pow(x*0.5,2.0)+h*h)));
  }
  return 0;
}