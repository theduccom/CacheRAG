#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <limits>
#include <cstring>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

#define LIMIT 1000010
using namespace std;

bool isnotprime[LIMIT] = {0};
bool dp[31][LIMIT] = {0};
int n, x;
int dishes[31];

void erathos()
{
	CLR(isnotprime);
	
	FOR(i, 2, LIMIT)
	{
		if( !isnotprime[i] )
		{
			for(int j = 2; i*j < LIMIT; j++)
			{
				isnotprime[i*j] = true;
			}
		}
	}
	
	return;
}

int solve()
{
	int res = 0;
	
	CLR(dp);
	
	FOR(j, 0, n)
	{
		for(int i = dishes[j]; i <= x; i += dishes[j])
		{
			dp[j][i] = true;
		}
		
		if( j > 0 )
			for(int i = 1; i <= x; i++)
			{
				if(  ( dp[j-1][i] ) || ((i - dishes[j] >= 0) && dp[j][i - dishes[j]]) )
				{
					dp[j][i] = true;
				}
			}
	}
	
	RFOR(i, 0, x+1)
	{
		if( !isnotprime[i] && dp[n-1][i] )
		{
			res = i;
			break;
		}
	}
	
	return res;
}

int main()
{
	erathos();
	
	while(cin >> n >> x, (n||x))
	{
		FOR(i, 0, n)
		{
			cin >> dishes[i];
		}
		
		int r = solve();
		
		if(r != 0)
			cout << r << endl;
		else
			cout << "NA" << endl;
	}
		
	return 0;
}