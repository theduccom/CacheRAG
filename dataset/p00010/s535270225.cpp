#include <cstdio>
#include <cmath>

using namespace std;

#define SQ(x) ((x) * (x))

double ix[4], iy[4], x[4], y[4], a[4], b[4], c[4];

void equation(double x1, double y1, double x2, double y2, double *equa, double *equb)
{
  if(x1 == x2){
    //    puts("x1 == x2");
    *equb = 0;
    return;
  }
  if(y1 == y2){
    //    puts("y1 == y2");
    *equa = 0;
    return;
  }

  *equa = (y1 - y2) / (x1 - x2);
  return;
}

void line(double cx, double cy, double *equa, double *equb, double *equc)
{
  //  printf("%lf %lf %lf %lf %lf\n", cx, cy, *equa, *equb, *equc);
  if(*equa == 0){
    *equa = 1;
    *equb = 0;
    *equc = cx;
    //    printf("x = %lf\n", *equc);
    return;
  }
  if(*equb == 0){
    *equa = 0;
    *equb = 1;
    *equc = cy;
    //    printf("y = %lf\n", *equc);
    return;
  }

  *equa = -1 / *equa;
  *equc = cy - (*equa) * cx;
  return;
}

double dist(double x1, double y1, double x2, double y2)
{
  return sqrt(SQ(x1-x2) + SQ(y1-y2));
}

void point(double a1, double b1, double c1, double a2, double b2, double c2, double *rx, double *ry)
{
  if(!a1 || !b1 || !a2 || !b2 ){
    if(!a1 && !b2){
      //      puts("a1 b2");
      *rx = c2;
      *ry = c1;
      return;
    }
    if(!b1 && !a2){
      //      puts("b1 a2");
      *rx = c1;
      *ry = c2;
      return;
    }

    if(!a1){
      //      puts("a1");
      *ry = c1;
      *rx = ((*ry) - c2) / a2;
      return;
    }
    if(!a2){
      //      puts("a2");
      *ry = c2;
      *rx = ((*ry) - c1) / a1;
      return;
    }
    /*    if(!a1 || !a2){
      puts("a");
      double aa = (a1 * b2) - (a2 * b1);
      double cc = (c1 * b2) - (c2 * b1);
      *rx = -(cc / aa);
      *ry = a1 * (*rx) + c1;
      return;
      }*/

    if(!b1){
      //      puts("b1");
      *ry = (a2 * c1 + c2) / b2;
      *rx = c1;
      return ;
    }
    if(!b2){
      //      puts("b2");
      *ry = (a1 * c2 + c1) / b1;
      *rx = c2;
      return;
    }
    /*    if(!b1 || !b2){
      puts("b");
      double bb = (b1 * a2) - (b2 * a1);
      double cc = (c1 * a2) - (c2 * a1);
      *ry = cc / bb;
      *rx = ((*ry) * b1 - c1) / a1;
      return;
      }*/

    fprintf(stderr, "error\n");
    return;
  }

  double bb = (b1 * a2) - (b2 * a1);
  double cc = (c1 * a2) - (c2 * a1);
  *ry = cc / bb;
  *rx = ((*ry) * b1 - c1) / a1;
  return;
}

int main()
{
  int n;
  scanf("%d", &n);
  while(n--){
    for(int i=0;i<3;i++)
      scanf("%lf%lf", &ix[i], &iy[i]);
    //    printf("%lf %lf %lf %lf %lf %lf\n", ix[0], ix[1], ix[2], iy[0], iy[1], iy[2]);    
    a[0] = a[1] = b[0] = b[1] = 1;
    c[0] = c[1] = 0;
    equation(ix[0], iy[0], ix[1], iy[1], &a[0], &b[0]);
    equation(ix[1], iy[1], ix[2], iy[2], &a[1], &b[1]);

    //    printf("傾き %lf %lf %lf %lf\n", a[0], b[0], a[1], b[1]);


    line((ix[0]+ix[1])/2, (iy[0]+iy[1])/2, &a[0], &b[0], &c[0]);
    line((ix[1]+ix[2])/2, (iy[1]+iy[2])/2, &a[1], &b[1], &c[1]);

    //    printf("line %lf %lf %lf %lf %lf %lf\n", a[0], b[0], c[0], a[1], b[1], c[1]);
    
    double resx, resy;
    point(a[0], b[0], c[0], a[1], b[1], c[1], &resx, &resy);

    printf("%.3lf %.3lf %.3lf\n", resx, resy, dist(resx, resy, ix[0], iy[0]));
    //    printf("%lf %lf\n", dist(resx, resy, ix[1], iy[1]), dist(resx, resy, ix[2], iy[2]));
  }
  return 0;
}