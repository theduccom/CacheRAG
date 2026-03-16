#include<iostream>
#include<cstdio>
using namespace std;
int main(){

  double a;
  double ma,mi;
  cin >> a;
  ma = a;
  mi = a;
  while(cin >> a){
    if(a < mi) mi = a;
    else if(a > ma) ma = a;
  }
  printf("%.3lf\n",ma-mi);
  return (0);
}