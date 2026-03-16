#include <cstdio>
#include <cmath>
using namespace std;
#define PI 3.141592653

double to_radian(int angle) {
  return double(angle) * PI / 180.0;
}

int main() {
  int len,angle;
  double x,y,rad;
  x = y = 0.0;
  rad = to_radian(90);
  while(scanf("%d,%d",&len,&angle)) {
    if((len | angle) == 0) break;
    x += len * cos(rad);
    y += len * sin(rad);
    rad = rad - to_radian(angle);
  }
  printf("%d\n%d\n",int(x),int(y));
}