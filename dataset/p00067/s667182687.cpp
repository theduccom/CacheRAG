#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main()
{
	vector<string> island(12);
	while (cin >> island[0]) {
		for (int i = 1; i < 12; ++i)
			cin >> island[i];

		int ans = 0;
		for (int i = 0; i < 12; ++i) {
			for (int j = 0; j < 12; ++j) {
				if (island[i][j] == '1') {
					++ans;
					queue<pair<int, int> > que;
					que.push(pair<int, int>(i, j));
					while (!que.empty()) {
						const pair<int, int> p = que.front();
						que.pop();

						island[p.first][p.second] = '0';
						for (int d = 0; d < 4; ++d) {
							pair<int, int> pp(pair<int, int>(p.first+dx[d], p.second+dy[d]));
							if (pp.first < 0 || 12 <= pp.first || pp.second < 0 || 12 <= pp.second || island[pp.first][pp.second] == '0')
								continue;
							que.push(pp);
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}