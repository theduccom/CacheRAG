#include <bits/stdc++.h>
using namespace std;
#define rad(x) x * M_PI / 180

int main(){
  double x = 0.0;
  double y = 0.0;
  int angle = 0.0;
  int d = 0;
  int r = 0;

  while (1){
    scanf("%d, %d", &r, &d);
    if (r == 0 && d == 0) break;
    y += r * sin(rad(angle));
    x += r * cos(rad(angle));

    angle += d;
  }

  printf("%d\n%d\n", (int)y, (int)x);
  return 0;
}