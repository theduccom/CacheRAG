#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void){
  int x, h;
  while(cin >> x >> h && x != 0 && h != 0){
    double S = x * sqrt(4 * h * h + x * x) + x * x;
    printf("%.6lf\n", S);
  }
  return 0;
}