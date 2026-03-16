#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

struct Edge{
	int to, cost;
};

typedef pair<int, int> P;

const int MAX_V = 3010;
const int INF = 1 << 30;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	char c0;
	vector<Edge> vec[MAX_V];
	for(int i = 0; i < m; ++i){
		int a, b, c, d;
		cin >> a >> c0 >> b >> c0 >> c >> c0 >> d;
		--a, --b;
		vec[a].push_back(Edge{b, c});
		vec[b].push_back(Edge{a, d});
	}

	int x1, x2, y1, y2;
	cin >> x1 >> c0 >> x2 >> c0 >> y1 >> c0 >> y2;
	--x1, --x2;

	int d[MAX_V];
	priority_queue<P, vector<P>, greater<P> > que;
	fill(d, d + n, INF);
	d[x1] = 0;
	que.push(P(0, x1));

	while(!que.empty()){
		P p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0; i < vec[v].size(); ++i){
			Edge e = vec[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to], e.to));
			}
		}
	}

	int ans1 = d[x2];
	//cout << ans1 << endl;

	priority_queue<P, vector<P>, greater<P> > que2;
	fill(d, d + n, INF);
	d[x2] = 0;
	que2.push(P(0, x2));

	while(!que2.empty()){
		P p = que2.top();
		que2.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0; i < vec[v].size(); ++i){
			Edge e = vec[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que2.push(P(d[e.to], e.to));
			}
		}
	}

	int ans2 = d[x1];
	//cout << ans2 << endl;

	cout << y1 - (ans1 + ans2 + y2) << endl;

	return 0;
}