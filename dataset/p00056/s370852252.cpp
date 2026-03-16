#include<iostream>

bool sieve[100000];
void makesieve();

int main()
{
	makesieve();
	while(1)
	{
		int n,ans=0;
		std::cin>>n;
		if(n==0)break;
		for(int i=0;i<=n/2;i++)
		{
			if(sieve[i]&&sieve[n-i])ans++;
		}
		std::cout<<ans<<std::endl;
	}
	return 0;
}

void makesieve()
{
	for(int i=0;i<100000;i++){sieve[i]=true;}
	sieve[0]=false;sieve[1]=false;
	for(int i=2;i<100000;i++)
	{
		for(int j=i*2;j<100000;j+=i)
		{
			sieve[j]=false;
		}
	}
}