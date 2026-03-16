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
template <typename T, typename U> void readAll(vector<pair<T, U> >& vec) { for (int i = 0, size = vec.size(); i < size; i++) cin >> vec[i].first >> vec[i].second; }
template < typename T > inline string toString( const T &a ){ ostringstream oss; oss << a; return oss.str(); };
inline bool between(int min, int max, int n) { return min <= n && n <= max; }
inline bool inRange(int begin, int end, int n) { return begin <= n && n < end; }
inline bool inRange(int size, int n) { return 0 <= n && n < size; }

int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, -1, 0, 1 };
int dr[] = { 0, -1, 0, 1 }, dc[] = { -1, 0, 1, 0 };

int n, w;
const int M_W = 1001;
const int M_N = 1001;
P dp[M_N][M_W];
PArray arr;

P dfs(int idx, int weight)
{
	if(idx == n) return P(0, weight);
	if(dp[idx][weight] != P()) return dp[idx][weight];

	P v1 = P(-1, weight + arr[idx].second);
	if(v1.second <= w)
	{
		P ret = dfs(idx + 1, weight + arr[idx].second);
		v1.first = ret.first + arr[idx].first;
		v1.second = ret.second;
	}
	P v2 = dfs(idx + 1, weight);
	P ans;
	if(v1.first == v2.first)
	{
		ans.first = v1.first;
		ans.second = min(v1.second, v2.second);
	}
	else ans = max(v1, v2);
	return dp[idx][weight] = ans;
}

int main(void)
{
	ios::sync_with_stdio(false);
	int counter = 0;
	while(cin >> w && w)
	{
		counter++;
		cin >> n;
		arr.resize(n);
		char c;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i].first >> c >> arr[i].second;
		}
		memset(dp, 0, sizeof(dp));
		P ans = dfs(0, 0);
		
		cout << "Case " << counter << ":" << endl;
		cout << ans.first << endl;
		cout << ans.second << endl;
	}
	return 0;
}