#include <iostream>

using namespace std;

int map[14][14] = {0};

void bom(int XXX, int YYY) {
	map[XXX][YYY] = 0;
	int xmove[12] = {1, 0, -1, 0, 2, 0, -2, 0, 3, 0, -3, 0};
	int ymove[12] = {0, 1, 0, -1, 0, 2, 0, -2, 0, 3, 0, -3};
	for (int i = 0; i < 12; i++) {
		if (map[XXX+xmove[i]][YYY+ymove[i]] == 1) {
			bom(XXX+xmove[i], YYY+ymove[i]);
		}
	}
	return;
}

void bakuhatu(int XX, int YY) {
	bom(XX, YY);
	for (int i = 3; i < 11; i++) {
		for (int j = 3; j < 11; j++) {
			cout << map[j][i];
		}
		cout << endl;
	}
	return;
}

int main() {
	int n;
	char a;
	int X, Y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int y = 3; y < 11; y++) {
			for (int x = 3; x < 11; x++) {
				cin >> a;
				map[x][y] = a - '0';
			}
		}
		cin >> X >> Y;
		X += 2;
		Y += 2;
		cout << "Data " << i+1 << ':' << endl;
		bakuhatu(X, Y);
	}
	return 0;
}