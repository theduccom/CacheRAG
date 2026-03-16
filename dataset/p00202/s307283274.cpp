#include <iostream>
#include <cstring>
using namespace std;

#define MAXNUM 1000001

bool prime[MAXNUM];

void eratosthenes()
{
	prime[0]=prime[1]=false;

	for(int i=2; i<MAXNUM; i++)
	{
		prime[i]=true;
	}
	
	for(int i=2; i*i<MAXNUM; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<MAXNUM; j+=i)
			{
				prime[j]=false;
			}
		}
	}
}


bool dp[1000001];

int main()
{
	eratosthenes();
	int N,B,c[30];
	while(cin >> N >> B, (N||B))
	{
		memset(dp,0,sizeof(dp));
		for(int i=0; i<N; i++)
			cin >> c[i];
			
		dp[0]=1;
		
		for(int i=0; i<N; i++)
		for(int j=0; j<B; j++)
		{
			if(j+c[i]>B) break;
			if(dp[j]) dp[j+c[i]]=1;
		}
		
		bool g=false;
		for(int i=B; i>1; i--)
		{
			if(dp[i]&&prime[i])
			{
				g=true;
				cout << i << endl;
				break;
			}
		}
		if(!g) cout << "NA" << endl;
	}
}