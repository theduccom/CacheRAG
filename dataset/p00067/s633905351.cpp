#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
char field[15][15];
void dfs(int x, int y) {
	int dx[4] = { 0,-1,0,1 };
	int dy[4] = { -1,0,1,0 };
	field[x][y] = '0';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx&&nx < 12 && 0 <= ny&&ny < 12 && field[nx][ny] == '1') dfs(nx, ny);
	}
	return;
}
int main() {
	while (true) {
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				cin >> field[i][j];
			}
		}
		if (cin.eof())break;
		int isl = 0;
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				if (field[i][j] == '1') {
					dfs(i, j);
					isl++;
				}
			}
		}
		printf("%d\n", isl);
	}
}