#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
  double x, h;
  while(cin >> x >> h && x != 0 || h != 0) {
    printf("%f\n", 1.0 * x * ( x + sqrt(4.0 * h * h + x * x)));
  }
  
  return 0;
}