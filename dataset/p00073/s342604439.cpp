#include <stdio.h>
#include <math.h>

int main(){
  double x, h, s;
  while(1){
    scanf("%lf%lf", &x, &h);
    if(!x && !h) break;
    printf("%.6f\n", (x * x) + 2 * x * sqrt((x / 2) * (x / 2) + h * h));
  }
  return 0;
}