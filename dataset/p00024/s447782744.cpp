#include <stdio.h>

int main(void) {

  double v,y;
  int n;

  
  while(scanf("%lf",&v)!=EOF) {

    printf("%d\n",(int)(v*v/(19.6*5.0))+2);

  }

  return 0;
}