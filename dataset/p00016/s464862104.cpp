#include <stdio.h>
#include <math.h>

int main(){
  double x, y, r;
  x = y = 0;
  r = -M_PI/2;
  while(1){
    int n,m;
    scanf("%d,%d", &n, &m);
    if(n==0&&m==0) break;

    x += n*cos(r);
    y += n*sin(r);
    r -= m*M_PI/180;
  }
  printf("%d\n%d\n", (int)x*-1,(int)y*-1);
}