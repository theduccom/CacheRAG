#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
  double x,h;
  while(1){
    cin>>x>>h;
    if(x==0)break;
    h=sqrt(h*h+(x/2)*(x/2) );
    printf("%lf\n",2*h*x+x*x);
  }
  return 0;
}

	