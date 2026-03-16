#include <stdio.h>
#include <math.h>

int main(void) {

  int data;
  double x1,y1,x2,y2,x3,y3;

  double x12,y12,x13,y13;
  double ang12,ang13;
  double xp,yp,r;

  int flag;
  int i;

  scanf("%d",&data);

  for(i=0;i<data;i++) {
    flag=1;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

    x12=(x1+x2)/2.0;
    y12=(y1+y2)/2.0;
    x13=(x1+x3)/2.0;
    y13=(y1+y3)/2.0;

    if(y1==y2) {

      xp=x12;

      ang13=-(x3-x1)/(y3-y1);

      yp=ang13*(xp-x13)+y13;

      flag=0;

    }

    if(y1==y3) {

      xp=x13;
      
      ang12=-(x2-x1)/(y2-y1);

      yp=ang12*(xp-x12)+y12;

      flag=0;

    }

    if(flag==1) {

      ang12=-(x2-x1)/(y2-y1);
      ang13=-(x3-x1)/(y3-y1);

      xp=(ang12*x12-ang13*x13-y12+y13)/(ang12-ang13);

      yp=ang12*(xp-x12)+y12;
    
    }

    r=sqrt((xp-x1)*(xp-x1)+(yp-y1)*(yp-y1));

    printf("%.3lf %.3lf %.3lf\n",xp,yp,r);
  }

  return 0;
  
}