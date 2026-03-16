#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
#define INF 10000000
#define PAIR pair<int,int>
class road {
public:
	int to;
	int money;
	int time;
	road(int a, int b, int c) :to(a), money(b), time(c) {}
};

vector<vector<int> > cost, fast;
vector<vector<road> > map;
void input(int);

int ccost(int, int);
int cfast(int, int);
int main() {
	int num, station;
	while (cin >> num >> station&&num != 0) {
		map.resize(station + 1);
		cost.resize(station + 1);
		fast.resize(station + 1);
		for (int i = 1; i <= station; ++i) {
			cost[i].resize(station + 1);
			fast[i].resize(station + 1);
			for (int j = 1; j <= station; ++j) {
				cost[i][j] = fast[i][j] = INF;
			}
		}
		input(num);
		int time;
		cin >> time;
		for (int i = 0; i < time; ++i) {
			int from, to, kind;
			cin >> from >> to >> kind;
			if (kind == 0) {
				cout << ccost(from, to) << endl;
			}
			else {
				cout << cfast(from, to) << endl;
			}
		}
		map.clear();
		fast.clear();
		cost.clear();
	}
	return 0;
}

int ccost(int from, int to) {
	int res = min(cost[from][to], cost[to][from]);
	if (res != INF)return res;
	priority_queue<PAIR, vector<PAIR>, greater<PAIR> > que;
	que.push(PAIR(0, from));
	cost[from][from] = 0;
	while (!que.empty()) {
		PAIR d = que.top();
		que.pop();
		if (d.first != cost[from][d.second]) {
			continue;
		}
		for (int i = 0; i < map[d.second].size(); ++i) {
			int dcost = d.first + map[d.second][i].money;
			int to = map[d.second][i].to;
			if (dcost < cost[from][to]) {
				cost[from][to] = dcost;
				que.push(PAIR(dcost, to));
			}
		}
	}
	return cost[from][to];
}
int cfast(int from, int to) {
	int res = min(fast[from][to], fast[to][from]);
	if (res != INF)return res;
	priority_queue<PAIR, vector<PAIR>, greater<PAIR> > que;
	que.push(PAIR(0, from));
	fast[from][from] = 0;
	while (!que.empty()) {
		PAIR d = que.top();
		que.pop();
		if (d.first != fast[from][d.second]) {
			continue;
		}
		for (int i = 0; i < map[d.second].size(); ++i) {
			int dtime = d.first + map[d.second][i].time;
			int to = map[d.second][i].to;
			if (dtime < fast[from][to]) {
				fast[from][to] = dtime;
				que.push(PAIR(dtime, to));
			}
		}
	}
	return fast[from][to];
}
void input(int num) {
	int a, b, cost, time;
	for (int i = 0; i < num; ++i) {
		cin >> a >> b >> cost >> time;
		map[b].push_back(road(a, cost, time));
		map[a].push_back(road(b, cost, time));
	}
}