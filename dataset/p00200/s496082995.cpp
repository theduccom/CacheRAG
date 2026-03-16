#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

struct Edge{
	int to, cost, time;
};

typedef pair<int, int> P;

const int MAX_V = 3010;
const int INF = 1 << 30;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m;
	while(cin >> n >> m && n != 0 && m != 0){

		vector<Edge> vec[MAX_V];
		int d[MAX_V];

		for(int i = 0; i < n; ++i){
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			--a, --b;
			vec[a].push_back(Edge{b, c, t});
			vec[b].push_back(Edge{a, c, t});
		}

		int k;
		cin >> k;

		while(k > 0){
			--k;
			priority_queue<P, vector<P>, greater<P> > que;
			fill(d, d + n, INF);

			int p, q, r;
			cin >> p >> q >> r;
			--p, --q;

			d[p] = 0;
			que.push(P(0, p));

			while(!que.empty()){
				P p0 = que.top();
				que.pop();
				int v = p0.second;
				if(d[v] < p0.first) continue;
				for(int i = 0; i < vec[v].size(); ++i){
					Edge e = vec[v][i];
					if(r == 0 && d[e.to] > d[v] + e.cost){
						d[e.to] = d[v] + e.cost;
						que.push(P(d[e.to], e.to));
					}
					if(r == 1 && d[e.to] > d[v] + e.time){
						d[e.to] = d[v] + e.time;
						que.push(P(d[e.to], e.to));
					}
				}
			}

			cout << d[q] << endl;
		}
	}

	return 0;
}