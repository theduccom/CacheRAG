#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
  double x,h,s;
  
  cin >> x >> h;
  while(x!=0&&h!=0){
    s=x*x+sqrt(h*h+x*x/4)*x*2;
    printf("%.6f\n",s);
    cin >> x >> h;
  }
  return 0;
}