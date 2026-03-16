//0044 Prime Number II

#include<cstdio>
#include<cmath>
using namespace std;

bool isPrime(int x)
{
	if(x <= 3)
		return true;
	if((x&1) == 0)
		return false;
	for(int i = 3; i*i <= x; i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}

int main(void)
{
	int n;
	int i;
	while(scanf("%d", &n) == 1)
	{
		for(i = n-1; i>= 2; i--)
		{
			if(isPrime(i))
			{
				printf("%d ", i);
				break;
			}
		}
		for(i = n+1; ; i++)
		{
			if(isPrime(i))
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}