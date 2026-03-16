#include <iostream>
#include <cstdio>
#include <cmath>

#define PI 3.1415926535

typedef struct{
  double x;
  double y;
}grid_chart;

int main()
{
  grid_chart t;
  t.x = t.y = 0;
  double angle = 0;
  while(1){
    double n, a;
    scanf("%lf,%lf", &n, &a);
    if(n == 0 && a == 0)
      break;
    else{
      t.x += n * sin(PI * angle / 180);
      t.y += n * cos(PI * angle / 180);
    }
    angle += a;
  }
  printf("%d\n%d\n", int(t.x), int(t.y));
}