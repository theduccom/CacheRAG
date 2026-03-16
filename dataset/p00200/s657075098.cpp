#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class home {
public:
	int time;
	int cost;
	home() :time(-1), cost(-1) {}
};

int main() {
	int n, m;
	while (cin >> n >> m&&n != 0) {
		vector<vector<home> > map(m + 1, vector<home>(m + 1));
		for (int i = 0; i < n; ++i) {
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			map[a][b].cost = c;
			map[b][a].cost = c;
			map[a][b].time = d;
			map[b][a].time = d;
		}
		bool flag = true;
		while (flag) {
			flag = false;
			for (int i = 1; i <= m - 1; ++i) {
				for (int j = i + 1; j <= m; ++j) {
					for (int k = 1; k <= m; ++k) {
						if (i == k || j == k)continue;
						if (map[i][k].cost == -1 || map[j][k].cost == -1)continue;
						if (map[i][k].time == -1 || map[j][k].time == -1)continue;
						int cost = map[i][k].cost + map[j][k].cost;
						int time = map[i][k].time + map[j][k].time;
						if (map[i][j].cost == -1 || map[i][j].cost > cost) {
							flag = true;
							map[j][i].cost = map[i][j].cost = cost;
						}
						if (map[i][j].time == -1 || map[i][j].time > time) {
							flag = true;
							map[i][j].time = map[j][i].time = time;
						}
					}
				}
			}
		}
		int num;
		cin >> num;
		for (int i = 0; i < num; ++i) {
			int a, b, c;
			cin >> a >> b >> c;
			if (c == 0) {
				cout << map[a][b].cost << endl;
			}
			else {
				cout << map[a][b].time << endl;
			}
		}
	}
	return 0;
}