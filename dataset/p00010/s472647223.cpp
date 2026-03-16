#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define int long long

signed main(){

        int n;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
                double x1,x2,x3,y1,y2,y3;
                scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
                double a = x2-x1;
                double b = y2-y1;
                double c = x3-x1;
                double d = y3-y1;
                double xc = 1/(a*d-b*c)*((a*a+b*b)/2*d+(c*c+d*d)/-2*b)+x1;
                double yc = 1/(a*d-b*c)*((a*a+b*b)/-2*c+(c*c+d*d)/2*a)+y1;
                printf("%.3f %.3f %.3f\n", xc, yc, sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc)));

        }

        return 0;
}