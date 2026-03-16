#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define INF (1<<29)

typedef pair<int, int> pii;
typedef vector<pii> vp;

int n, m;
vector<vp> g; //pos, cost

int dijkstra(int from, int to) {
	priority_queue<pii, vector<pii>, greater<pii> > que; //cost, pos
	vector<int> d(n, INF);
	
	que.push(pii(0, from));
	d[from] = 0;
	while (! que.empty()) {
		int cost = que.top().first;
		int pos = que.top().second;
		que.pop();
		
		if (d[pos] < cost) continue;
		
		REP(i, g[pos].size()) {
			pii now = g[pos][i];
			if (d[now.first] > d[pos] + now.second) {
				d[now.first] = d[pos] + now.second;
				que.push(pii(d[now.first], now.first));
			}
		}
	}
	
	return d[to];
}

int main() {	
	cin >> n >> m;
	g.resize(m);
	REP(i, m) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--; b--;
		g[a].push_back(pii(b, c));
		g[b].push_back(pii(a, d));
	}
	
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	x1--; x2--;
	
	int ans = y1 - y2 - (dijkstra(x1, x2) + dijkstra(x2, x1));
	cout << ans << endl;
	
	return 0;
}