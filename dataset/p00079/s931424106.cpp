#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  double x[30],y[30],ans=0;
  for(int i=0;;i++){
    if(scanf("%lf,%lf",&x[i],&y[i]) == EOF) break;
    if(i>1){
      double a,b,c,z;
      a = sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]));
      b = sqrt((x[i-1]-x[0])*(x[i-1]-x[0])+(y[i-1]-y[0])*(y[i-1]-y[0]));
      c = sqrt((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]));
      z = (a+b+c)/2;
      ans+=sqrt(z*(z-a)*(z-b)*(z-c));
    }
  }
  printf("%.6lf\n",ans);
  return 0;
}