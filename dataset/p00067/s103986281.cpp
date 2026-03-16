#include<iostream>
using namespace std;

char isl[12][12];

void dfs(int x, int y) {
	isl[x][y] = '0';

	for (int i = -1;i <= 1;i += 2) {
		int ax = x + i;
		if (0 <= ax&&ax < 12&&isl[ax][y] == '1') { dfs(ax, y); }
	}

	for (int j = -1;j <= 1;j += 2) {
		int ay = y + j;
		if (0 <= ay&&ay < 12&&isl[x][ay] == '1') { dfs(x, ay); }
	}
	return;
}

int main() {

	while (cin>>isl[0]) {
		int ca = 0;
		for (int i = 1;i < 12;i++) {
			for (int j = 0;j < 12;j++) {
				cin >> isl[i][j];
				if (isl[i][j] == EOF) { break; }
			}
		}

		for (int i = 0;i < 12;i++) {
			for (int j = 0;j < 12;j++) {
				if (isl[i][j] == '1') {
					dfs(i, j);
					ca++;
				}
			}
		}
		cout << ca << endl;
	}
	return 0;
}