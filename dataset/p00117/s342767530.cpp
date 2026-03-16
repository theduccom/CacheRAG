# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;
typedef pair<int, int> P;
vector<P> v[100001];

int dij(int s, int g) {

	int i;

	priority_queue<P, vector<P>, greater<P> > que;
	bool used[100001] = { false };

	que.push(P(0, s));

	while (!que.empty()) {
		P now = que.top();
		que.pop();

		int cost = now.first;
		int to = now.second;
		used[to] = true;
		if (to == g) {
			return cost;
		}

		for (i = 0; i < v[to].size(); i++) {

			int nextcost = cost + v[to][i].first;
			int next = v[to][i].second;

			if (used[next] == false) {
				que.push(P(nextcost, next));
			}
		}
	}
	return INF;
}

int main() {
	int N, M;
	int a, b, c, d;

	cin >> N >> M;
	char ch;
	for (int i = 0; i < M; i++) {
		cin >> a >> ch >> b >> ch >> c >> ch >> d;
		a--;
		b--;
		v[a].push_back(P(c, b));
		v[b].push_back(P(d, a));
	}
	int s, g, v, p;
	cin >> s >> ch >> g >> ch >> v >> ch >> p;
	cout << v - p - dij(s - 1, g - 1) - dij(g - 1, s - 1) << endl;
}