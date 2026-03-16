#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
#define pInt pair<int, int>

struct asc {
	bool operator() (const pInt &x, const pInt &y) const {
		return x.second > y.second;
	}
};

priority_queue <pInt, vector<pInt>, asc> pq;
int dijkstra(int *cost, int terminal, int n, vector<vector<int> > vc) {
	while(!pq.empty()) {
		pInt p = pq.top();
		pq.pop();
		rep(i,n) {
			if(vc[p.first][i] != -1) {
				int total = p.second + vc[p.first][i];
				if(total < cost[i]) {
					pq.push(make_pair(i,total));
					cost[i] = total;
				}
			}
		}
	}
	return cost[terminal];
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > vc(n); 
	rep(i,n) {
		vector<int> va(n);
		vc[i] = va;
		rep(j,n) {
			vc[i][j] = -1;
		}
	}
	rep(i,m) {
		int s, t, c1, c2;
		scanf("%d,%d,%d,%d", &s, &t, &c1, &c2);
		vc[--s][--t] = c1;
		vc[t][s] = c2;
	}
	int s, g, a, b;
	scanf("%d,%d,%d,%d", &s, &g, &a, &b);
	--s, --g;
	int cost[20] = {};

	rep(i,n) {
		if(i==s)cost[i] = 0;
		else cost[i] = INT_MAX;
	}
	pq.push(make_pair(s,0));
	int ret = 0;
	ret += dijkstra(cost, g, n, vc);

	rep(i,n) {
		if(i==g)cost[i] = 0;
		else cost[i] = INT_MAX;
	}
	pq.push(make_pair(g,0));
	ret += dijkstra(cost, s, n, vc);

	cout << a - b - ret << endl;
	return 0;
}