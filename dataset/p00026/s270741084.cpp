#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, y, c;
	int cnt = 0;
	int max=0;
	int map[10][10];
	int dx[] = { 0, -1, 1, 0, -1, 1, -1, 1, 0, -2, 2, 0 };
	int dy[] = { -1, 0, 0, 1, -1, -1, 1, 1, -2, 0, 0, 2 };
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			map[i][j] = 0;
		}
	}
	while (scanf("%d,%d,%d", &x, &y, &c) != EOF) {
		map[y][x]++;
		for (int i = 0; i < c * 4; ++i) {
			int mx = dx[i] + x;
			int my = dy[i] + y;
			if (mx >= 0 && mx < 10 && my >= 0 && my < 10) {
				map[my][mx]++;
			}
		}
	}
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if(max<map[i][j])max=map[i][j];
			if (map[i][j] == 0) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	cout<<max<<endl;
}