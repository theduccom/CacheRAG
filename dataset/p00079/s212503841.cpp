#include <stdio.h>
#include <math.h>

typedef struct {

    double x;
    double y;

} vect;

double dist(vect p1,vect p2) {

  return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));

}

int main(void) {

  vect pos[25];
  int n;

  double area;
  double z;
  double a,b,c;

  int i;

  n=0;

  while(scanf("%lf,%lf",&pos[n].x,&pos[n].y)!=EOF) {

    n++;
    //if(n==5) break;

  }

  area=0.0;

  for(i=1;i<=n-2;i++) {

    a=dist(pos[0],pos[i]);
    b=dist(pos[0],pos[i+1]);
    c=dist(pos[i],pos[i+1]);

    z=(a+b+c)/2.0;

    area+=sqrt(z*(z-a)*(z-b)*(z-c));

  }

  printf("%lf\n",area);

  return 0;

}