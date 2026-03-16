#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

vector<string> split(string &str,char delim)
{
	vector<string> res;
	size_t current = 0,found;
	while((found = str.find_first_of(delim,current)) != string::npos)
	{
		res.push_back(string(str,current,found  - current));
		current = found + 1;
	}
	res.push_back(string(str,current,str.size() - current));
	return res;
}

int main()
{
	int n,m,cost[21][21];
	rep(i,21)
	{
		rep(j,21)
		{
			cost[i][j] = 1000000;
		}
	}

	cin >> n >> m;

	rep(i,m)
	{
		string s;
		cin >> s;
		vector<string> _s = split(s,',');
		int a = atoi(_s[0].c_str());
		int b = atoi(_s[1].c_str());
		int c = atoi(_s[2].c_str());
		int d = atoi(_s[3].c_str());

		cost[a][b] = c;
		cost[b][a] = d;
	}


	REP(k,1,n+1)
	{
		REP(i,1,n+1)
		{
			REP(j,1,n+1)
			{
				cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
			}
		}
	}

	string s;
	cin >> s;
	vector<string> _s = split(s,',');
	int x1 = atoi(_s[0].c_str());
	int x2 = atoi(_s[1].c_str());
	int y1 = atoi(_s[2].c_str());
	int y2 = atoi(_s[3].c_str());

	int ans = y1 - y2;
	ans -= cost[x1][x2] + cost[x2][x1];

	cout << ans << endl;
	return 0;
}