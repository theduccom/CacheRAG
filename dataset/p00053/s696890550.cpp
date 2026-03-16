#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
bool prime[1000000];
void eratos(void)
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<1000000;i++)
	{
		if(!prime[i])continue;
		for(int j=i*2;j<1000000;j+=i)
		{
			prime[j]=false;
		}
	}
	return;
}
int main()
{
	eratos();
	ll ans;
	int n,count;
	while(1)
	{
		count=0;
		ans=0;
		cin >> n;
		if(n==0)break;
		for(int i=0;i<1000000;i++)
		{
			if(prime[i])
			{
				count++;
				ans += i;
			}
			if(count==n)break;
		}
		cout << ans << endl;
	}
	return 0;
}