#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
typedef pair<int, int> P;
int main() {
	queue<P> que;
	int n, x, y,culx, culy, cnt = 0;
	char map[10][10];
	int tox[12] = { 1,0,2,0,3,0,-1,0,-2,0,-3,0 }, toy[12] = { 0,1,0,2,0,3,0,-1,0,-2,0,-3 };
	cin >> n;
	while (n != cnt) {
		cnt++;
		for (int i = 1; i <= 8; ++i) {
			for (int j = 1; j <= 8; ++j) {
				cin >> map[j][i];
				map[j][i]=(map[j][i] == '1' ? true : false);
			}
		}
		cin >> x >> y;
		que.push(P(x, y));
		map[x][y] = 0;
		while (que.size()) {
			for (int i = 0; i < 12; ++i) {
				culx = que.front().first + tox[i];
				culy = que.front().second + toy[i];
				if (culx <= 0 || 9 <= culx||culy<=0||9<=culy)continue;
				if (map[culx][culy]) {
					map[culx][culy] = false;
					que.push(P(culx, culy));
				}
			}
			que.pop();
		}
		cout << "Data " << cnt << ":" << endl;
		for (int i = 1; i <= 8; ++i) {
			for (int j = 1; j <= 8; ++j) {
				cout<< (map[j][i]?1:0);
			}
			cout << endl;
		}
	}
	return 0;
}
