#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

string ground[12];
int dx[4] = {0, 1, -1, 0};
int dy[4] = {-1, 0, 0, 1};

void dfs(int i, int j) {
	if (ground[i][j] == '0')
		return;
	ground[i][j] = '0';
	for (int k = 0; k < 4; k++) {
		int ni = i + dx[k];
		int nj = j + dy[k];
		if (0<=ni && ni<12 && 0<=nj && nj<12)
			if (ground[ni][nj] == '1')
				dfs(ni, nj);
	}
}

int main() {
	string s;
	while (cin >> ground[0]) {
		int ans = 0;
		for (int i = 1; i < 12; i++)
			cin >> ground[i];
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				if (ground[i][j] == '1') {
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}