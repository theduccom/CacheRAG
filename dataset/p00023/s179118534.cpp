#include<stdio.h>
#include<math.h>

int main()
{
	int n,x;
	double xa,ya,ra,xb,yb,rb,d;

	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);

		d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));

		if(ra+rb<d)
		{
			printf("0\n");
		}
		else if(ra<rb&&d<rb-ra)
		{
			printf("-2\n");
		}
		else if(rb<ra&&d<ra-rb)
		{
			printf("2\n");
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;
}