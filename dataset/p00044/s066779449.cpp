#include<stdio.h>

int sosu_high_min(int n);
int sosu_small_max(int n);

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int high=0,min;
		if(n<3||50000<n)
		{
		}
		else
		{
			high=sosu_small_max((n-1));
			min=sosu_high_min((n+1));
			printf("%d %d\n",high,min);
		}
	}
}

int sosu_small_max(int n)
{
	int t;
	for(n;;n--)
	{
		for(t=2;t<=n;t++)
		{
			if(t==n)
			{
				return n;
			}
			else if(n%t==0)
			{
				break;
			}
		}
	}
}
int sosu_high_min(int n)
{
	int t;
	for(n;;n++)
	{
		for(t=2;t<=n;t++)
		{
			if(t==n)
			{
				return t;
			}
			else if(n%t==0)
			{
				break;
			}
		}
	}
}