#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string>s(10);
int n, sx, sy;

void dfs(int x, int y) {
	s[x][y] = '0';
	for (int i = -3; i <= 3; i++) {
		if (x + i >= 0&&x+i<=7) {
			if (s[x + i][y] == '1') {
				dfs(x + i, y);
			}
		}
	}
	for (int i = -3; i <= 3; i++) {
		if (y + i >= 0&&y+i<=7) {
			if (s[x][y + i] == '1') {
				dfs(x, y + i);
			}
		}
	}
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> s[j];
		}
		cin >> sx >> sy;
		dfs(sy - 1, sx - 1);
		cout << "Data "<<i+1<<":"<< endl;
		for (int j = 0; j < 8; j++) {
			cout << s[j] << endl;
		}
	}
	return 0;
}