#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  double xa,ya,ra;
  double xb,yb,rb;

  int n;
  
  double d,dr,sr;
  int i;


  scanf("%d",&n);

  for(i=0;i<n;i++) {

    scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);

    d=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);

    dr=(rb-ra)*(rb-ra);

    sr=(ra+rb)*(ra+rb);

    if(d>sr) printf("0\n");

    else if(d<sr && d>dr) printf("1\n");

    else if(dr>d && ra>rb) printf("2\n");

    else if(dr>d && rb>ra) printf("-2\n");

    else printf("1\n");

  }

  return 0;

}