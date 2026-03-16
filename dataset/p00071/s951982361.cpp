#include<iostream>
#include<vector>

using namespace std;

int mp[8][8] = {};
int k[12] = { 1, 2, 3, -1, -2, -3, 0, 0, 0, 0, 0, 0 };
int h[12] = { 0, 0, 0, 0, 0, 0, 1, 2, 3, -1, -2, -3 };

void bomb(int x, int y) {
	if (x < 0 || x > 7 || y < 0 || y > 7)
		return;
	if (mp[x][y] == 0)
		return;
	mp[x][y] = 0;
	for (int i = 0; i < 12; i++) {
		bomb(x + k[i], y + h[i]);
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 8; j++) {
			int a;
			cin >> a;
			for (int o = 7; o >= 0; o--) {
				mp[o][j] = a % 10;
				a /= 10;
			}
		}
		int x, y;
		cin >> x;
		cin >> y;
		bomb(x -1, y -1);
		cout << "Data " << i + 1 << ":" << endl;
		for (int j = 0; j < 8; j++) {
			for (int o = 0; o < 8; o++) {
				cout << mp[o][j];
			}
			cout << endl;
		}
	}
	return 0;
}