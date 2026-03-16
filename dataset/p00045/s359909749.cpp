#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  double sum = 0,n = 0,i;
  for(i=0;;i++){
    double a,b;
    if(scanf("%lf,%lf",&a,&b) == EOF) break;
    sum+=a*b;
    n+=b;
  }
  printf("%d\n%d\n",(int)sum,(int)floor(n/i+0.5));
  return 0;
}