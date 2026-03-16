#include <bits/stdc++.h>
using namespace std;
int main(){
  double x[25],y[25],ans=0,a,b,c,z;
  int cnt=0;
  while(scanf("%lf,%lf",&x[cnt],&y[cnt])!=EOF){
    if(cnt>=2){
      a=sqrt(fabs(x[0]-x[cnt-1])*fabs(x[0]-x[cnt-1])+fabs(y[0]-y[cnt-1])*fabs(y[0]-y[cnt-1]));
      b=sqrt(fabs(x[cnt-1]-x[cnt])*fabs(x[cnt-1]-x[cnt])+fabs(y[cnt-1]-y[cnt])*fabs(y[cnt-1]-y[cnt]));
      c=sqrt(fabs(x[cnt]-x[0])*fabs(x[cnt]-x[0])+fabs(y[cnt]-y[0])*fabs(y[cnt]-y[0]));
      z=(a+b+c)/2.0;
      ans+=sqrt(z*(z-a)*(z-b)*(z-c));
    }
    cnt++;
  }
  printf("%.10lf\n",ans);
  return 0;
}

