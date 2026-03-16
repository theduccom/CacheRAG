#include <bits/stdc++.h>
using namespace std;
int n, x;
int v[30], dp[1000001];
bool sosu[1000001];
int main()
{
	for(int i = 2; i < 1000000; i++)
	{
		if(!sosu[i])
		{
			for(int j = 2; j * i <= 1000000; j++)
			{
				sosu[i * j] = 1;
			}
		}
	}
	while(1)
	{
		cin >> n >> x;
		if(n == 0 && x == 0)
			break;
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		memset(dp, 0, sizeof(dp));
		dp[0]= 1;

		for(int i = 0; i < n; i++)
			for(int j  = 0; j <= x - v[i]; j++)
				if(dp[j])
						dp[j + v[i]] = dp[j];
					for(int i = x; i >= 0; i--)
					{
						if(!sosu[i] && dp[i])
						{
							if(i)
								cout << i << endl;
							else
								cout << "NA" << endl;
							break;
						}
					}
				}
				return 0;
			}