#include <iostream>
#include <map>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

#define rep(i,n) for(int i=0; i < n;i++)

using namespace std;

int dp[1001][1001];

vector<string> split(const string &str, char delim){
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos){
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}

int main()
{
	int count = 0;
	int W,n,ans;
	int w[1001],v[1001];

	while(cin >> W && W)
	{
		count++;
		memset(dp,0,sizeof(dp));
		cin >> n;
		rep(i,n)
		{
			string s;
			cin >> s;
			vector<string> _s = split(s,',');
			v[i] = atoi(_s[0].c_str());
			w[i] = atoi(_s[1].c_str());
		}

		for(int i=0;i< n ;i++)
		{
			for(int j = 0 ; j <= W; j++)
			{
				if(j < w[i])
				{
					dp[i+1][j] = dp[i][j];
				}
				else
				{
					dp[i+1][j] = max(dp[i][j],dp[i][j - w[i]] + v[i]);
				}
			}
		}
		for(int j=0;j <= W ; j++)
		{
			if(dp[n][j] == dp[n][W])
			{
				ans = j;
				break;
			}
		}
		cout << "Case " << count <<  ":" << endl;
		cout << dp[n][W] << endl << ans << endl;
	
	}

	return 0;
}