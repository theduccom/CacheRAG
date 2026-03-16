#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
  int n;
  cin>>n;
  for (int i=0;i<n;i++){
    double x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a,b,c,d,e,f;
    a=-2*x1+2*x2;
    b=-2*y1+2*y2;
    c=x2*x2+y2*y2-x1*x1-y1*y1;
    d=-2*x1+2*x3;
    e=-2*y1+2*y3;
    f=x3*x3+y3*y3-x1*x1-y1*y1;
    double x=(c*e-b*f)/(a*e-b*d),y=(c*d-a*f)/(b*d-a*e);
    double r=(x1-x)*(x1-x)+(y1-y)*(y1-y);
    r=sqrt(r);
    printf("%.3f %.3f %.3f\n",x,y,r);
  }
  return 0;
}