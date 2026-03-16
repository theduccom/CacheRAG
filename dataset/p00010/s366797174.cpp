#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;

void sol(){
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    double s=(a+b+c)/2;
    double ss=sqrt(s*(s-a)*(s-b)*(s-c));
    double sina=2*ss/b/c;
    double r=a/sina/2;
    a*=a;
    b*=b;
    c*=c;
    double px=(a*(b+c-a)*x3+b*(a+c-b)*x2+c*(a+b-c)*x1)/16/(ss*ss);
    double py=(a*(b+c-a)*y3+b*(a+c-b)*y2+c*(a+b-c)*y1)/16/(ss*ss);
    printf("%.3lf %.3lf %.3lf\n",px,py,r);

}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sol();
    }
    return 0;
}