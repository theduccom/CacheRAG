#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

const int INF = 1<<30;
const int MAX = 1000000;
typedef long long ll;

int main()
{
	bool dp[MAX+1]; // dp[i]
	bool prime[MAX+1];
	int n, m;
	memset(prime, true, sizeof(prime));

	for(int i = 2; i < sqrt(MAX); i++)
	{
		if(prime[i] == false)
		{
			continue;
		}
		for(int j = i*2; j < MAX; j += i)
		{
			prime[j] = false;
		}
	}

	while(cin >> n >> m ,n)
	{

		for(int i = 0; i <= MAX; i++)
		{
			dp[i] = false;
		}
		dp[0] = true;

		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			for(int t = 0; t <= m-x; t++)
			{
				if(dp[t])
				{
					dp[t+x] = true;
				}
			}
		}

		int res = -1;
		for(int i = m; i >= 2; --i)
		{
			if(dp[i] && prime[i])
			{
				res = i;
				break;
			}
		}
		if(res ==  -1)
		{
			cout << "NA" << endl;
		}
		else
		{
			cout << res << endl;
		}

	}
}