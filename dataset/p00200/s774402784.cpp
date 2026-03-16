#include <cstdio>
#include <queue>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int inf = (int)2e5;

struct E{
	E(int t, int c) :
		t(t), c(c)
	{}

	int t, c;
};

int n, m;
vector<E> g[2][100];
int d[100];

int dijkstra(vector<E>* g, int start, int goal){
	fill(d, d + n, inf);

	priority_queue<P, vector<P>, greater<P> > q;
	d[start] = 0;
	q.push(P(0, start));
	while(!q.empty()){
		P v = q.top();
		q.pop();

		if(v.first > d[v.second]){
			continue;
		}

		rep(i, g[v.second].size()){
			E e = g[v.second][i];
			if(d[e.t] > d[v.second] + e.c){
				d[e.t] = d[v.second] + e.c;
				q.push(P(d[e.t], e.t));
			}
		}
	}

	return d[goal];
}

int main(){
	while(1){
		scanf("%d%d", &m, &n);
		if(n == 0 && m == 0){
			break;
		}

		rep(i, m){
			int a, b, c, d;
			scanf("%d%d%d%d", &a, &b, &c, &d);

			g[0][--a].push_back(E(--b, c));
			g[0][b].push_back(E(a, c));

			g[1][a].push_back(E(b, d));
			g[1][b].push_back(E(a, d));
		}

		int z;
		scanf("%d", &z);
		rep(i, z){
			int t, a, b;
			scanf("%d%d%d", &a, &b, &t);
			printf("%d\n", dijkstra(g[t], a - 1, b - 1));
		}

		rep(i, n){
			g[0][i].clear();
			g[1][i].clear();
		}
	}
	return 0;
}