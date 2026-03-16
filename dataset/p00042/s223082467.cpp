#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <set>

using namespace std;

#define ALL(co) co.begin(), co.end()
#define tpl(...) make_tuple(__VA_ARGS__)

typedef long long LL;
typedef pair<int, int> P; typedef pair<int, P> IP; typedef pair<P, P> PP;
typedef vector<int> Array; typedef vector<vector<int> > Array2;
typedef vector<LL> LArray; typedef vector<P> PArray; typedef vector<string> SArray;

const int INF = 1 << 29;
const LL LINF = 1LL << 60;

inline int getInt() { int itiv; return (cin >> itiv, itiv); }
template <typename T> void readAll(vector<T>& vec) { for (int i = 0, size = vec.size(); i < size; i++) cin >> vec[i]; }
template <typename T, typename U> void readAll(vector<pair<T, U> >& vec) { char c;for (int i = 0, size = vec.size(); i < size; i++) cin >> vec[i].first >> c >> vec[i].second; }
template < typename T > inline string toString( const T &a ){ ostringstream oss; oss << a; return oss.str(); };
inline bool between(int min, int max, int n) { return min <= n && n <= max; }
inline bool inRange(int begin, int end, int n) { return begin <= n && n < end; }
inline bool inRange(int size, int n) { return 0 <= n && n < size; }

int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
int dr[] = { 0, -1, 0, 1 }, dc[] = { -1, 0, 1, 0 };

int w, n;

// index, weight
P dp[1010][1010];
PArray treasure;

P dfs(int idx, int weight)
{
	if(idx >= n) return P(0, weight);
	if(dp[idx][weight].first != -1) return dp[idx][weight];

	P ret1 = dfs(idx + 1, weight);
	P ret2 = P(-1, -1);
	if(weight + treasure[idx].second <= w)
	{
		ret2 = dfs(idx + 1, weight + treasure[idx].second);
		ret2.first += treasure[idx].first;
	}
	P ret;
	if(ret1.first == ret2.first)
		ret = P(ret1.first, min(ret1.second, ret2.second));
	else ret = max(ret1, ret2);
	return dp[idx][weight] = ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	int count = 1;
	while(cin >> w && w)
	{
		n = getInt();
		for (int i = 0; i <= n; i++)
		{
			memset(dp[i], -1, sizeof(dp[i]));
		}
		treasure.resize(n);
		readAll(treasure);

		P ans = dfs(0, 0);

		cout << "Case " << count << ':' << endl;
		cout << ans.first << endl << ans.second << endl;
		count++;
	}
	return 0;
}