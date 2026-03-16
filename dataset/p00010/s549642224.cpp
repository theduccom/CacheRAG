#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        double x1,x2,x3,y1,y2,y3;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double a1,a2,b1,b2,c1,c2;
        a1=2*(x2-x1);b1=2*(y2-y1);
        a2=2*(x3-x1);b2=2*(y3-y1);
        c1=x1*x1-x2*x2+y1*y1-y2*y2;
        c2=x1*x1-x3*x3+y1*y1-y3*y3;
        double x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
        double y=(c1*a2-c2*a1)/(a1*b2-a2*b1);

        double a=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        double c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        double s=(a+b+c)/2;
        double r=(a*b*c)/(4*sqrt(s*(s-a)*(s-b)*(s-c)));
        printf("%.3f %.3f %.3f\n",x,y,r);
    }
}