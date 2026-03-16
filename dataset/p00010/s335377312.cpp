#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
	int n;
	double p,q,r;
	double a1,a2,b1,b2,c1,c2;
	double x1,x2,x3,y1,y2,y3;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		a1 = 2*(x2-x1);
		b1 = 2*(y2-y1);
		c1 = (x1*x1)+(y1*y1)-(x2*x2)-(y2*y2);
		a2 = 2*(x3-x1);
		b2 = 2*(y3-y1);
		c2 = (x1*x1)+(y1*y1)-(x3*x3)-(y3*y3);
		p = ((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
		q = ((a2*c1)-(a1*c2))/((a1*b2)-(a2*b1));
		r = sqrt(((x1-p)*(x1-p))+((y1-q)*(y1-q)));
		printf("%.3f %.3f %.3f\n",p,q,r);
	}
}