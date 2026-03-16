#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
  int n;
  double x[3],y[3];
  double a[2],b[2],c[2];
  double xa,ya;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      scanf("%lf %lf",&x[j],&y[j]);
    }
    for(int j=1;j<3;j++){
      a[j-1]=2*(x[j]-x[0]);
      b[j-1]=2*(y[j]-y[0]);
      c[j-1]=x[0]*x[0]-x[j]*x[j]+y[0]*y[0]-y[j]*y[j];
    }
    xa=(b[0]*c[1]-b[1]*c[0])/(a[0]*b[1]-a[1]*b[0]);
    ya=(c[0]*a[1]-c[1]*a[0])/(a[0]*b[1]-a[1]*b[0]);
    printf("%.3f %.3f %.3f\n",xa,ya,hypot(abs(xa-x[0]),abs(ya-y[0])));
  }
}