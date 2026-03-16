#include <iostream>
#include <cstdio>
#include <cmath>
#define SQ(x) (x)*(x)

using namespace std;

double dis(double x1,double x2,double y1,double y2){
  return(sqrt(SQ(x2-x1)+SQ(y2-y1)));
}

int main(void){
  int n=0;
  double k[20][2],s=0;
  char c;
  while(cin>>k[n][0]>>c>>k[n][1])n++;
  for(int i=1;i<n-1;i++){
    double a=dis(k[0][0],k[i][0],k[0][1],k[i][1]);
    double b=dis(k[i][0],k[i+1][0],k[i][1],k[i+1][1]);
    double c=dis(k[0][0],k[i+1][0],k[0][1],k[i+1][1]);
    double z=(a+b+c)/2;
    s+=sqrt(z*(z-a)*(z-b)*(z-c));
  }
  printf("%.6lf\n",s);
  return 0;
}