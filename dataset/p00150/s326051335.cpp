#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, i2;
	int prime[10000];
	for(int i=2; i<= 10000; i++){
		prime[i]=1;
		for(i2 = 2; i2<=sqrt(i); i2++)
		{
			if(i % i2 == 0)
			{
				prime[i] = 0;
				break;
			}
		}
	}
	while(1)
	{
		scanf ("%d",&n);
		if(n==0)
		{
			return 0;
		}
		for(i=n; 1; i--)
		{
			if(prime[i] && prime[i-2])
			{
				printf("%d %d\n",i-2 ,i);
				break;
			}
		}
	}
}