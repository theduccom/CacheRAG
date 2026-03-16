#include <stdio.h>

int isprime(int n)
{
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int p1[10000];
	int q1[10000];
	int n, i, cnt = 0;

	while(1)
	{
		scanf ("%d",&n);
		for(i=n; i!=0; i--)
		{
			if(isprime(i) == 1 && isprime(i-2) == 1)
			{
				p1[cnt] = i;
				q1[cnt] = i-2;
				break;
			}
		}
		if(n==0)
		{
			break;
		}
		cnt++;
	}
	for(i=0; i<cnt; i++)
	{
		printf("%d %d\n",q1[i],p1[i]);
	}
	return 0;
}