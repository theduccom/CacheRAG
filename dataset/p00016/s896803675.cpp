#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
  const double PI=3.14159265358979;
  double inr=0,ind=0;
  double x=0,y=0;
  int degree=90;
  while(scanf("%lf,%lf",&inr,&ind) , inr||ind){
    y+=inr*sin(PI/180*degree);
    x+=inr*cos(PI/180*degree);
    degree-=ind;
  }
  x=(int)x;
  y=(int)y;
  cout<<x<<endl<<y<<endl;
  return 0;
}