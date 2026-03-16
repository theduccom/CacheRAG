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

int x, n;

const int MAX_N = 1000000;
int prime[MAX_N];
bool is_prime[MAX_N + 1];
int eratos(int n)
{
	int p = 0;
	for (int i = 0; i <= n; i++) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++)
	{
		if(is_prime[i])
		{
			prime[p++] = i;
			for (int j = 2*i; j <= n; j += i) is_prime[j] = false; 
		}
	}
	return p;
}

bool dp[1000000];

int main(void)
{
	ios::sync_with_stdio(false);
	while(cin >> n >> x && n)
	{
		memset(dp, false, sizeof(dp));
		int ps = eratos(x);
		dp[0] = true;
		int ans = -1;
		for (int i = 0; i < n; i++)
		{
			int price = getInt();
			for (int j = 0; j <= x; j++)
			{
				if(dp[j] && is_prime[j]) ans = max(ans, j);
				if(j + price <= x && dp[j]) dp[j + price] = dp[j];
			}
		}

		cout << (ans == -1 ? "NA" : toString(ans)) << endl;
	}
	return 0;
}