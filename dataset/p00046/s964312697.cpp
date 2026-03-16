#include<cstdio>
#define MAX(x,y) ((x>y)? x:y)
#define MIN(x,y) ((x>y)? y:x)

 double max=0.0,min=0.0;

int main()
{
	double n;
	while(scanf("%lf",&n)!=EOF)
	{
		if(max==0.0&&min==0.0)
		{
			max=n;
			min=n;
		}
		max=MAX(max,n);
		min=MIN(min,n);
	}
	printf("%lf",max-min);
	return 0;
}