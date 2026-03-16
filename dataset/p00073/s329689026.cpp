#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
  int x,h,i,j;
  double S;
  while(1){
    cin >> x >> h;
    if(x ==0 && h == 0)break;
    S=(x * x)+sqrt( ((x*0.5) * (x*0.5)) + (h*h) ) * x * 0.5 * 4;
    printf("%.6lf\n",S);
  }
  return 0;
}