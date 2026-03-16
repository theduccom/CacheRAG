#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main() {
  int n=0;
  double ax,ay,bx,by,cx,cy,S,R,a,b,c,x,y;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    S=abs(((bx-ax)*(cy-ay)-(cx-ax)*(by-ay))/2);
    a=sqrt((cx-bx)*(cx-bx)+(cy-by)*(cy-by));
    b=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
    c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    R=a*b*c/(4*S);
    x=(a*a*(b*b+c*c-a*a)*ax+b*b*(c*c+a*a-b*b)*bx+c*c*(a*a+b*b-c*c)*cx)/(16*S*S);
    y=(a*a*(b*b+c*c-a*a)*ay+b*b*(c*c+a*a-b*b)*by+c*c*(a*a+b*b-c*c)*cy)/(16*S*S);
    printf("%.3f %.3f %.3f\n",x,y,R);
  }
}