#include <iostream>
using namespace std;

#define MAXNUM 1000001

bool prime[MAXNUM];
bool price[MAXNUM];

int main()
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

	int n,x,p;
	while(cin >> n >> x, (n||x))
	{
		price[0] = true;
		for(int i=1; i<=x; i++)
		price[i] = false;

		while(n--)
		{
			cin >> p;
			for(int i=p; i<=x; i++)
			{
				if(price[i-p]) price[i]=true;
			}
		}

		int j;
		for(j=x; j>1; j--)
		{
			if(price[j]&&prime[j])
			{
				cout << j << endl;
				break;
			}
		}
		if(j==1) cout << "NA" << endl;
	}
}