#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    double x[2],y[2],r[2],h;
    for(int j=0;j<2;j++) scanf("%lf %lf %lf",&x[j],&y[j],&r[j]);
    h=hypot(abs(x[0]-x[1]),abs(y[0]-y[1]));
    if(h+r[1]<r[0]) puts("2");
    else if(h+r[0]<r[1]) puts("-2");
    else if(h<=r[0]+r[1]) puts("1");
    else puts("0");
  }
}