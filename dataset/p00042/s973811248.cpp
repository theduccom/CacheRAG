#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define INF 100000000
#define _INF -100000000
#define INFLL (long long)1e14
#define _INFLL (long long)-1e14
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<char> vc;
typedef vector<vector<char>> vvc;
struct dat { double x, y, arg; };
#pragma warning disable 4997

void knapsack(int n, int m, vi v, vi w) {
	vvi dp(n + 1, vi(m + 1, 0));
	Loop1(i, n) {
		Loop1(j, m) {
			if (j - w[i] < 0) dp[i][j] = dp[i - 1][j];
			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
		}
	}
	int buf = dp[n][m];
	Loopr(j, m) {
		if (dp[n][j] < buf) {
			cout << dp[n][j + 1] << endl;
			cout << j + 1 << endl;
			break;
		}
	}
	return;
}

int main() {
	int W, N, cnt = 0;
	while (cin >> W, W) {
		cnt++;
		cin >> N;
		vi v(N + 1), w(N + 1);
		Loop1(i, N) {
			scanf("%d,%d", &v[i], &w[i]);
		}
		cout << "Case " << cnt << ":" << endl;
		knapsack(N, W, v, w);
	}
	return 0;
}