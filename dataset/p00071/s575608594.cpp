#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

typedef pair<int, int> P;

void solve(int no) {
	char field[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			cin >> field[i][j];

	int x, y;
	queue<P> que;
	cin >> x >> y;
	que.push(P(x - 1, y - 1));

	while (!que.empty()) {
		P p = que.front(); que.pop();
		field[p.second][p.first] = '0';
		for (int i = 0; i < 4; i++) {
			for (int j = 1; j <= 3; j++) {
				int nx = p.first + (dx[i] * j);
				int ny = p.second + (dy[i] * j);
				if (0 <= nx && nx < 8 && 0 <= ny && ny < 8) {
					if (field[ny][nx] == '1')
						que.push(P(nx, ny));
					field[ny][nx] = '0';
				}
			}
		}
	}

	printf("Data %d:\n", no);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << field[i][j];
		cout << endl;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		solve(i + 1);
	}
	return 0;
}