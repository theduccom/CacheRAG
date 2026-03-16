#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  int x, h;
  while(cin >> x >> h){
    if(x == 0 && h == 0) break;
    printf("%.6f\n", x* sqrt(4*h*h + x*x) + x*x);
  }
  return 0;
}