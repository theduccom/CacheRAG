#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
 
int main(){
  while(1){
  double dh,S,x,h,t;
  cin>>x>>h;
  if(x+h==0) break;
  S=x*x;
  dh=sqrt(h*h+(x/2)*(x/2));
  t=4*dh*x/2;
  S+=t;
  printf("%f\n",S);
  }
 
  
  return 0;
}