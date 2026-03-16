#include <stdio.h>
#include <math.h>

int main(void) {

  int x,h;

  while(1) {

    scanf("%d",&x);

    scanf("%d",&h);

    if(x==0 && h==0) break;

    printf("%6lf\n",x*x+2.0*x*sqrt(x*x/4.0+h*h));

  }

  return 0;

}