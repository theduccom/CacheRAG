#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
  double x,h;
  while(1){
  cin >> x >> h;
  if(x == 0 && h == 0)break;
  double s = x*x+x*sqrt(pow(h,2)+pow((x/2),2))*2;
  printf("%.5f\n",s);
  }
}