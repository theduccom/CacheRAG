#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;

int main(){


  while(1){
    int x,h;
    double s,a,b;
    
    scanf("%d %d",&x,&h);
    if(x==0 && h==0) break;

    s=x*x;
    a=x/2.;
    b=sqrt(a*a+h*h);
    
    s+=x*b*2;

    printf("%f\n",s);
  }

  return 0;
}