#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 3.141592

int main() {
  double l, ang;
  double nowang = PI/2;
  double x = 0, y = 0;
  while(true) {
    scanf("%lf,%lf", &l,&ang);
    if (l+ang==0) break;
    x += cos(nowang) * l;
    y += sin(nowang) * l;
    nowang -= ang * PI / 180;
  }
  printf("%d\n%d\n", (int)x,(int)y);
}