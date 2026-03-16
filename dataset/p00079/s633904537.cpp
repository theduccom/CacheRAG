#include<iostream>
#include<cmath>
#include<cstdio>
#include<map>
#define l(a,b,c,d) sqrt(pow(c-a,2)+pow(d-b,2))
#define KEI(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
using namespace std;
int main(){
  int n=0;
  double x[20],y[20];
  double sum = 0.0,a,b,c,s;

  while(scanf("%lf,%lf",&x[n],&y[n])!=EOF) n++;
  for(int i=2;i<n;i++){
    a = l(x[0],y[0],x[i-1],y[i-1]);
    b = l(x[0],y[0],x[i],y[i]);
    c = l(x[i-1],y[i-1],x[i],y[i]);
    sum += KEI((a+b+c)/2,a,b,c);
  }
  printf("%.10f\n",sum);
}