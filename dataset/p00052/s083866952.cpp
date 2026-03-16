#include<cstdio>

int main()
{
	long long int n;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0)break;
		int ans=0;
		for(int i=5;true;i*=5)
		{
			if((n-(n%i))/i==0)break;
			else
			{
				ans+=(n-(n%i))/i;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}