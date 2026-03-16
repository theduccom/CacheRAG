//↓template↓

#include "bits/stdc++.h"
using namespace std;
#define Would
#define you
#define all(n)  n.begin(),n.end()
const long long INF = 1e18;
const long long MOD = 1e9 + 7;
const double pi = acos(-1);
const int SIZE = 1 << 17;
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 }, alp[30];
long long fac[200005], finv[200005], inv[200005];
vector<long long>dij;
struct edge { long long to, cost; };
vector<vector<edge> >G;

long long mod_pow(long long a, long long b) {
	long long res = 1, mul = a;
	for (int i = 0; i < 31; ++i) {
		if (b >> i & 1) {
			res *= mul;
			res %= MOD;
		}
		mul = (mul * mul) % MOD;
	}

	return res;
}

void addedge(int from, int to, int cost) {
	G[from].push_back({ to,cost });
	G[to].push_back({ from,cost });
}

//↑template↑

void dijkstra(int n) {
	priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>que;
	fill(all(dij), INF);
	dij[n] = 0;
	que.push(pair<long long, long long>(0, n));

	while (!que.empty()) {
		pair<long long, long long>p = que.top();
		que.pop();
		long long mon = p.second;
		if (dij[mon] < p.first) continue;
		for (int i = 0; i < G[mon].size(); ++i) {
			edge e = G[mon][i];
			if (dij[e.to] > dij[mon] + e.cost) {
				dij[e.to] = dij[mon] + e.cost;
				que.push(pair<long long, long long>(dij[e.to], e.to));
			}
		}
	}
}


int main() {
	int n, m;
	cin >> n >> m;
	dij.resize(n + 1);
	G.resize(n + 1);
	for (int i = 0; i < m; ++i) {
		int a, b, c, d;
		char yu, ru, sann;
		cin >> a >> yu >> b >> ru >> c >> sann >> d;
		--a; --b;
		G[a].push_back({ b,c });
		G[b].push_back({ a,d });
	}
	int q, w, e, r, ans;
	char ze, tta, i;
	cin >> q >> ze >> w >> tta >> e >> i >> r;
	--q; --w;
	ans = e - r;
	dijkstra(q);
	ans -= dij[w];
	dijkstra(w);
	cout << ans - dij[q] << endl;
}
