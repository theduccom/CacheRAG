#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int n, m;
	const int INF = 1 << 30;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;

		vector<vector<int> > charge(m, vector<int>(m, INF));
		vector<vector<int> > time(m, vector<int>(m, INF));
		for (int i = 0; i < n; ++i) {
			int s, t, c, tm;
			cin >> s >> t >> c >> tm;
			--s;
			--t;
			charge[s][t] = charge[t][s] = c;
			time[s][t] = time[t][s] = tm;
		}

		vector<vector<pair<int, int> > > ans(m, vector<pair<int, int> >(m, pair<int, int>(INF, INF)));
		// dijkstra(charge)
		for (int i = 0; i < m; ++i) {
			ans[i][i].first = 0;
			priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;
			que.push(pair<int, int>(0, i));
			
			while (!que.empty()) {
				pair<int, int> q = que.top();
				que.pop();
				int v = q.second;
				if (ans[i][v].first < q.first)
					continue;
				for (unsigned int j = 0; j < charge[v].size(); ++j) {
					if (ans[i][j].first > ans[i][v].first + charge[v][j]) {
						ans[i][j].first = ans[i][v].first + charge[v][j];
						que.push(pair<int, int>(ans[i][j].first, j));
					}
				}
			}
		}

		// dijkstra(time)
		for (int i = 0; i < m; ++i) {
			ans[i][i].second = 0;
			priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;
			que.push(pair<int, int>(0, i));
			
			while (!que.empty()) {
				pair<int, int> q = que.top();
				que.pop();
				int v = q.second;
				if (ans[i][v].second < q.first)
					continue;
				for (unsigned int j = 0; j < time[v].size(); ++j) {
					if (ans[i][j].second > ans[i][v].second + time[v][j]) {
						ans[i][j].second = ans[i][v].second + time[v][j];
						que.push(pair<int, int>(ans[i][j].second, j));
					}
				}
			}
		}

		int k;
		cin >> k;
		for (int i = 0; i < k; ++i) {
			int p, q, r;
			cin >> p >> q >> r;
			--p;
			--q;
			if (r == 0)
				cout << ans[p][q].first << endl;
			else
				cout << ans[p][q].second << endl;
		}
	}

	return 0;
}