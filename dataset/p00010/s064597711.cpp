#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define E 1e-10

int main(){
  int n;
  double x1,y1,x2,y2,x3,y3,xp,yp,r;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >>x1>>y1>>x2>>y2>>x3>>y3;
    double a,b,c,d,e,f;
    a=x1-x2;
    b=y1-y2;
    c=x2-x3;
    d=y2-y3;
    e=(x1+x2)/2*a+(y1+y2)/2*b;
    f=(x2+x3)/2*c+(y2+y3)/2*d;
    xp=(d*e-b*f)/(a*d-b*c);
    yp=(-c*e+a*f)/(a*d-b*c);
    r=sqrt((xp-x1)*(xp-x1)+(yp-y1)*(yp-y1));

    if(xp>0) xp=(int)(xp*1000+0.5)/1000.0;
    else if(xp<0) xp=(int)(abs(xp)*1000+0.5)/1000.0*(-1);
    if(yp>0) yp=(int)(yp*1000+0.5)/1000.0;
    else if(yp<0) yp=(int)(abs(yp)*1000+0.5)/1000.0*(-1);
    if(r>0) r=(int)(r*1000+0.5)/1000.0;
    else if(r<0) r=(int)(abs(r)*1000+0.5)/1000.0*(-1);

    if(abs(xp)<0.001)xp+=E;
    if(abs(yp)<0.001)yp+=E;
    if(abs(r)<0.001)r+=E;

    cout << fixed <<setprecision(3);
    cout <<xp<<' '<<yp<<' '<<r<<'\n';
  }
  return 0;
}