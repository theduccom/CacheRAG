#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
  double a,b,x = 0,y = 0,angle = 90;
  while(scanf("%lf,%lf",&a,&b),a||b){
    x+=a*cos(angle*2*M_PI/360);
    y+=a*sin(angle*2*M_PI/360);
    angle-=b;
  }
  cout <<(int)x<<endl<<(int)y<<endl;
  return 0;
}