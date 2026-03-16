#include "bits/stdc++.h"
using namespace std;

int dx[12] = { 1,0,-1,0,1,-1,-1,1,2,0,-2,0 };
int dy[12] = { 0,-1,0,1,-1,-1,1,1,0,-2,0,2 };

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	vector<vector<int>> paper(10, vector<int>(10, 0));
	int x, y, s; char c;
	int b = 100, m = 0;
	while (cin >> x >> c >> y >> c >> s) {
		if (paper[x][y] == 0) b--;
		//paper[x][y]++;
		m = max(++paper[x][y], m);
		int l;
		if (s == 1) l = 4;
		else if (s == 2)l = 8;
		else l = 12;

		for (int i = 0; i < l;i++) {
			if (x + dx[i] < 0 || x + dx[i] > 9 || y + dy[i] < 0 || y + dy[i] > 9) continue;
			if (paper[x + dx[i]][y + dy[i]] == 0)b--;
			m = max(++paper[x + dx[i]][y + dy[i]],m);
		}
	}
	cout << b << endl << m << endl;
}