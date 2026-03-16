#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double check(double x1,double y1,double x2,double y2,double x3,double y3);
int main(void){
	double ans=0;
	double xa,ya,xb,yb,xc,yc;
        scanf("%lf,%lf",&xa,&ya);
        scanf("%lf,%lf",&xb,&yb);
        scanf("%lf,%lf",&xc,&yc);
        ans+=check(xa,ya,xb,yb,xc,yc);
        xb=xc,yb=yc;
        while(scanf("%lf,%lf",&xc,&yc)!=EOF){
            ans+=check(xa,ya,xb,yb,xc,yc);
            xb=xc,yb=yc;
        }
        printf("%.8lf\n",ans);

	return 0;
}

double check(double x1,double y1,double x2,double y2,double x3,double y3){
    double ab,bc,ca;
    double S,s;
    ab=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    bc=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    ca=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    s=0.5*(ab+bc+ca);
    S=sqrt(s*(s-ab)*(s-bc)*(s-ca));
    return S;
}