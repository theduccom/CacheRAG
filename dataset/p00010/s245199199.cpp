#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	double x1,x2,x3,y1,y2,y3,x,y,r;
	double a,b,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	    x=(y1-y3)*(y1*y1-y2*y2+x1*x1-x2*x2)-(y1-y2)*(y1*y1-y3*y3+x1*x1-x3*x3);
	    x/=(2*(y1-y3)*(x1-x2)-2*(y1-y2)*(x1-x3));

	    y=(x1-x3)*(x1*x1-x2*x2+y1*y1-y2*y2)-(x1-x2)*(x1*x1-x3*x3+y1*y1-y3*y3);
	    y/=(2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));

	    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	    b=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
	    c=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
	    a=sqrt(a);
	    b=sqrt(b);
	    c=sqrt(c);
	    r=a*b*c/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));

		printf("%.3f %.3f %.3f\n",x,y,r);
	}
	return 0;
}
/*?????\???*/