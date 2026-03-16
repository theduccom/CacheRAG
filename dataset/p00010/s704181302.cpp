#include <stdio.h>
#include <math.h>

int main(int argc,char* argv[]){
  double x1,y1,x2,y2,x3,y3;
  double x,y,r;
  double r12,r23,r31,angle1,angle2,angle3;
  int num,count;
  
  scanf("%d",&num);
  
  for(count = 0; num > count;count++){
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    
    r12 = sqrt((x1 -x2)*(x1 -x2) + (y1 -y2)*(y1 -y2));
    r23 = sqrt((x2 -x3)*(x2 -x3) + (y2 -y3)*(y2 -y3));
    r31 = sqrt((x3 -x1)*(x3 -x1) + (y3 -y1)*(y3 -y1));
    
    angle3 = acos( (r23*r23+r31*r31-r12*r12) / (2.0*r23*r31) );
    angle1 = acos( (r31*r31+r12*r12-r23*r23) / (2.0*r31*r12) );
    angle2 = acos( (r12*r12+r23*r23-r31*r31) / (2.0*r12*r23) );
    
    x = (sin(2.0*angle1)*x1 + sin(2.0*angle2)*x2 + sin(2.0*angle3)*x3)/(sin(2.0*angle1) + sin(2.0*angle2) + sin(2.0*angle3));
    y = (sin(2.0*angle1)*y1 + sin(2.0*angle2)*y2 + sin(2.0*angle3)*y3)/(sin(2.0*angle1) + sin(2.0*angle2) + sin(2.0*angle3));
    
    r = r23/ sin(angle1) / 2.0;
    
    printf("%.3lf %.3lf %.3lf\n",x,y,r);
  }
  
  return 0;
  
}