#include<cstdio>
#include<cmath>
using namespace std;
int main(void)
{	
	double x[20],y[20],s,z,ss,l1,l2,l3;
	int i,j,n;
	n=0;
	while(scanf("%lf,%lf",&x[n],&y[n])!=EOF) n++;
	s=0.0;
	for(i=1;i<n-1;i++)	{
		l1=sqrt((x[0]-x[i])*(x[0]-x[i])+(y[0]-y[i])*(y[0]-y[i]));
		l2=sqrt((x[0]-x[i+1])*(x[0]-x[i+1])+(y[0]-y[i+1])*(y[0]-y[i+1]));
		l3=sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
		z=(l1+l2+l3)/2.0;
		ss=sqrt(z*(z-l1)*(z-l2)*(z-l3));
		s+=ss;
	}
	printf("%lf\n",s);
	return 0;
}
