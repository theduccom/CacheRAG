#include <iostream>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 1000000

using namespace std;

int prime[MAX];

int main()
{

	prime[0] = prime[1] = 0;

	REP(i,2,MAX)
	{
		prime[i] = 1;
	}

	REP(i,2,MAX)
	{
		if(prime[i])
		{
			for(int j = i*2;j < MAX;j += i)
			{
				prime[j] = 0;
			}
		}
	}



	int n;
	while(cin >> n && n)
	{
		int count = 0;
		int ans = 0;
		rep(i,MAX)
		{
			if(count == n) break;

			if(prime[i] == 1)
			{
				ans += i;
				count++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}