#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
  double x=0;
  double y=0;
  double angle=0;
  double r,th;
  while(1){
    scanf("%lf,%lf",&r,&th);
    if(r==0&&th==0)break;
    x+=r*sin(2*M_PI*angle/360);
    y+=r*cos(2*M_PI*angle/360);
    angle+=th;
  }
  printf("%d\n%d\n",(int)x,(int)y);
  return 0;
}