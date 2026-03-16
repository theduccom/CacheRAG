#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

struct point{
     double x, y;
};

void renritu(point p1, point p2, double *a, double *b, double *c){
    *a=2*(p2.x-p1.x);
    *b=2*(p2.y-p1.y);
    *c=p1.x*p1.x+p1.y*p1.y-(p2.x*p2.x+p2.y*p2.y);
}

int main(void){
    int i,n;
    point p1,p2,p3;
    cin >> n;
    for(i=0;i<n;i++){
        double a1,b1,c1,a2,b2,c2,r;
        cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
        renritu(p1,p2,&a1,&b1,&c1);
        renritu(p1,p3,&a2,&b2,&c2);
        p3.x=-(b2*c1-b1*c2)/(a1*b2-a2*b1);
        p3.y=-(a1*c2-a2*c1)/(a1*b2-a2*b1);
        r=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
        printf("%.3lf %.3lf %.3lf\n",round(p3.x*1000)/1000,round(p3.y*1000)/1000, round(r*1000)/1000);
    }
    return 0;
}