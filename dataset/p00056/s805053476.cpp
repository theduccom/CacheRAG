#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool prime[50001];
void eratos(void)
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<50001;i++)
	{
		if(!prime[i])continue;
		for(int j=i*2;j<50001;j+=i)
		{
			prime[j]=false;
		}
	}
	return;
}
int main()
{
	eratos();
	int n,count;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)break;
		count =0;
		for(int i=1;i<n/2+1;i++)
		{
			if(prime[i]&&prime[n-i])count++;
		}
		cout << count << endl;
	}
	return 0;
}