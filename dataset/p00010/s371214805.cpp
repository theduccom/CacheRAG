#include<iostream>
#include<math.h>
#include<stdio.h>

int main(){
  int n;
  double a,b,c,d,e,f,x,y,r;
  double x1,y1,x2,y2,x3,y3;

  std::cin >> n;

  for(int i=0;i<n;i++){
    std::cin >> x1>>y1>>x2>>y2>>x3>>y3;
    a = 2*(x1-x2);
    b = 2*(y1-y2);
    c = +(x1*x1-x2*x2)+(y1*y1-y2*y2);
    d = 2*(x2-x3);
    e = 2*(y2-y3);
    f = +(x2*x2-x3*x3)+(y2*y2-y3*y3);

    x = (double)(c*e-b*f)/(a*e-b*d);
    y = (double)(a*f-c*d)/(a*e-b*d);

    if(x == 0){x = 0;}
    if(y == 0){y = 0;}

    r = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));

    printf("%.3f %.3f %.3f\n",x,y,r);
  }
}