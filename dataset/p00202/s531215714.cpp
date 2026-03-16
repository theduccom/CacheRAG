#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>

#define REP(i,k,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int prime[1000001];
int dp[1000001];

void CreatePrime()
{
	rep(i,1000001) prime[i] = 1;

	prime[0] = 0;

	for(int i=0;i<1000001;i++)
	{
		if(prime[i] == 1)
		{
			int num = i+1;
			for(int j=num*2-1;j <1000001;j += num)
			{
				prime[j] = 0;
			}
		}
	}
}

int main()
{
	CreatePrime();

	int a[31];
	int n,x,ans = 0;
	
	
	while(cin >> n >> x)
	{
		if(n == 0 || x == 0)
		{
			break;
		}

		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));

		ans = 0;
		rep(i,n) 
		{
			cin >> a[i];
			dp[a[i]] = 1;
		}

		rep(i,n)
		{
			rep(j,x+1)
			{
				if(dp[j] == 1 && j+a[i] <= x)
				{
					dp[j+a[i]] = 1;
				}
			}
		}

		rep(i,x+1)
		{
			if(dp[i] == 1 && prime[i-1] == 1)
			{
				ans = i;
			}
		}

		if(ans == 0)
		{
			cout << "NA" << endl;
		}
		else
		{
			cout << ans << endl;
		}


	}
	
	return 0;
}