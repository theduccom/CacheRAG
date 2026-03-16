#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>
#include<iterator>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, char> plc;


struct edge {
	int cost;
	int to;
};

ll INF = 1000000000;
int N,M,s,g,v,p;
ll d[110];
vector<edge> G[110];

void dijkstra(int s) {
	priority_queue<pl, vector<pl>, greater<pl> > q;
	fill(d, d + N, INF);
	d[s] = 0;
	q.push(pl(0, s));

	while (!q.empty()) {
		pl p = q.top(); q.pop();
		int v = p.second;
		if (d[v] < p.first)continue;
		for (int i = 0; i < G[v].size(); i++) {
			edge e = G[v][i];
			if (d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				q.push(pl(d[e.to], e.to));
			}
		}
	}
}

int main()
{
	ll ans = 0;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--, b--;
		G[a].push_back({c,b});
		G[b].push_back({d,a});
	}
	scanf("%d,%d,%d,%d",&s,&g,&v,&p);
	s--, g--;
	dijkstra(s);
	ans += d[g];
	dijkstra(g);
	ans += d[s];
	cout << v - p - ans << endl;

	return	0; 
}