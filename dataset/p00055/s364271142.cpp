#include<cstdio>


double s[10];

void set()
{
	for(int i=1;i<10;i++)
	{
		if(i%2==0)
		{
			s[i]=s[i-1]/3;
		}
		else
		{
			s[i]=s[i-1]*2;
		}
	}
}

int main()
{
	double a;
	while(scanf("%lf",&a)!=EOF)
	{
		s[0]=a;
		set();
		double ans=0.0;
		for(int i=0;i<10;i++)
		{
			ans+=s[i];
		}
		printf("%lf\n",ans);
	}
	return 0;
}