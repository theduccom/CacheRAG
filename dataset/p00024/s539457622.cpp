#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
	double V,y,v,t;
	while(scanf("%lf",&V)>0)
	{
		int l=0,r=INT_MAX,m;
		while(l<r)
		{
			m=(l+r)/2;
			y=5.*m-5;
			t=sqrt(y/4.9);
			v=9.8*t;
			if(V<=v)r=m;
			else l=m+1;
		}
		printf("%d\n",l);
	}
	return 0;
}