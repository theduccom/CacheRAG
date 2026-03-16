#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <limits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

using namespace std;

int w,n;
int val[2000], wg[2000];
int dp[2000]; //[wg] <= val


pair<int, int> solve()
{
	pair<int, int> p = make_pair<int,int>(0, 0);
	CLR(dp);
	
	FOR(j, 0, n)
	{
		RFOR(i, 0, w+1)
		{
			if(( i == 0 || dp[i] != 0)&&( i+wg[j] <= w))
			{
				dp[i+wg[j]] = max(dp[i+wg[j]], dp[i]+val[j]);
			}
		}
	}
	
	FOR(i, 0, w+1)
	{
		if( p.first < dp[i])
		{
			p.first = dp[i];
			p.second = i;
		}
	}
	
	return p;
	
}

int main()
{
	int c = 1;
	pair<int, int> q;
	char p;
	
	while(cin >> w, w)
	{
		cin >> n;
		
		FOR(i, 0, n)
		{
			cin >> val[i] >> p >> wg[i];
		}	
		
		solve();
		
		cout << "Case " << c << ":" << endl;
		c++;
		
		q = solve();
		
		cout << q.first << endl << q.second << endl;
		
	}
	
	return 0;
}