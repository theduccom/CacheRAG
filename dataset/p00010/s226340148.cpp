#include <stdio.h>
#include <math.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  int i;
  for(i=0; i<n; ++i){
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double det = x1*y2-x1*y3+x2*y3-x2*y1+x3*y1-x3*y2;
    double a = ((y2-y3)*(-x1*x1-y1*y1)+(y3-y1)*(-x2*x2-y2*y2)+(y1-y2)*(-x3*x3-y3*y3))/det;
    double b = ((x3-x2)*(-x1*x1-y1*y1)+(x1-x3)*(-x2*x2-y2*y2)+(x2-x1)*(-x3*x3-y3*y3))/det;
    double c = ((x2*y3-x3*y2)*(-x1*x1-y1*y1)+(x3*y1-x1*y3)*(-x2*x2-y2*y2)+(x1*y2-x2*y1)*(-x3*x3-y3*y3))/det;
    double xp = -a/2;
    double yp = -b/2;
    double r = sqrt(xp*xp+yp*yp-c);

    printf("%.3f %.3f %.3f\n", xp, yp, r);
  }

  return 0;
}