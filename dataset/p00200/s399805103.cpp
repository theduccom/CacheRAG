#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>
#include <tuple>
#include <utility>
#include <list>
#include <cmath>
#include <unordered_map>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 100000;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(c) (c).begin(), (c).end()

struct edge{ int to, cost; edge(int t, int c) :to(t), cost(c){} };

int main()
{
	//while (cin >> n)
	stringstream ss;
	//ss << "result" << i + 1 << ".txt";
	//FILE* fp_out = freopen(ss.str().c_str(), "w", stdout);

	int n, m;
	while (cin >> n >> m && n)
	{
		vector<vector<int>> times(m, vector<int>(m, INF));
		vector<vector<int>> costs(m, vector<int>(m, INF));
		rep(i, n)
		{
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			a--; b--;
			costs[a][b] = costs[b][a] = c;
			times[a][b] = times[b][a] = t;
		}

		rep(k, m) rep(i, m) rep(j, m)
		{
			costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j]);
			times[i][j] = min(times[i][j], times[i][k] + times[k][j]);
		}

		int k; cin >> k;
		rep(i, k)
		{
			int p, q, r; cin >> p >> q >> r;
			p--; q--;
			cout << (r ? times[p][q] : costs[p][q]) << endl;
		}
	}

	return 0;
}