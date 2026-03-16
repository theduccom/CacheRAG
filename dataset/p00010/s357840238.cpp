#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--){
       double x1,x2,x3,y1,y2,y3;
       double px,py,r;
       scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
       double a1=(x2*x2+y2*y2-x1*x1-y1*y1)*(y3-y1);
       double b1 =(x3*x3+y3*y3-x1*x1-y1*y1)*(y2-y1);
        double a2 =(x3*x3+y3*y3-x1*x1-y1*y1)*(x2-x1);
        double b2 =(x2*x2+y2*y2-x1*x1-y1*y1)*(x3-x1);
        double c = (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
        px=(a1-b1)/c/2;
        py=(a2-b2)/c/2;
        r = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
        printf("%.3f %.3f %.3f\n",px,py,r);
   }
    return 0;
}
