#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 1000000
#define pb push_back

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
		rep(i,(n/2)+1)
		{
			if(prime[i] == 1 && prime[n - i] == 1)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}