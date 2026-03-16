#include <iostream>
#include <cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long

int main()
{
    double x1,x2,x3,y1,y2,y3,r=0,a,b,c;
    scanf("%lf,%lf",&x1,&y1);
    scanf("%lf,%lf",&x2,&y2);
    while(scanf("%lf,%lf",&x3,&y3) != EOF)
    {
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	r+=sqrt((a+b+c)/2*(b+c-a)/2*(a-b+c)/2*(a+b-c)/2);
	x2=x3;
	y2=y3;
    }
    printf("%.6f\n",r);
    return 0;
}