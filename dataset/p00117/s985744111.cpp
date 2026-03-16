#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<functional>

using namespace std;
typedef pair<int, int> P;
int n, m;
vector<vector<P>> E;//to cost

int djk(int s, int e) {
	int d[20];
	for (int i = 0; i < n; i++)d[i] = 1000000000;
	d[s] = 0;
	priority_queue<P, vector<P>, greater<P>> pq;
	pq.emplace(0, s);
	while (pq.size()) {
		P tmp = pq.top(); pq.pop();
		int t = tmp.second;
		if (d[t] < tmp.first)continue;
		for (int i = 0; i < E[t].size(); i++) {
			if (d[E[t][i].first] > d[t] + E[t][i].second) {
				d[E[t][i].first] = d[t] + E[t][i].second;
				pq.emplace(d[E[t][i].first], E[t][i].first);
			}
		}
	}
	return d[e];
}

int main() {
	cin >> n >> m;
	E.resize(n);
	for (int i = 0; i < m; i++) {
		char ch;
		int a, b, c, d;
		cin >> a >> ch >> b >> ch >> c >> ch >> d;
		a--, b--;
		E[a].push_back(make_pair(b, c));
		E[b].push_back(make_pair(a, d));
	}
	int a, b, c, d;
	char ch;
	cin >> a >> ch >> b >> ch >> c >> ch >> d;
	a--, b--;
	cout << c - d - djk(a, b) - djk(b, a) << endl;
	return 0;
}