#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double GetLen(double x1,double y1,double x2,double y2){
  return sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
}
main(){
  int n;
  double x1,y1,x2,y2,x3,y3; 
  double R,rx,ry;
  double a,b,c,a1,b1,c1,a2,b2,c2;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a=GetLen(x1,y1,x2,y2);
    b=GetLen(x2,y2,x3,y3);
    c=GetLen(x3,y3,x1,y1);
    R=(a*b*c)/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
    a1=2*(x2-x1);
    b1=2*(y2-y1);
    c1=x1*x1-x2*x2+y1*y1-y2*y2;
    a2=2*(x3-x1);
    b2=2*(y3-y1);
    c2=x1*x1-x3*x3+y1*y1-y3*y3;
    rx=(b1*c2-b2*c1)/(a1*b2-a2*b1);
    ry=(c1*a2-c2*a1)/(a1*b2-a2*b1);
    printf("%.3f %.3f %.3f\n",rx,ry,R);
  }
}