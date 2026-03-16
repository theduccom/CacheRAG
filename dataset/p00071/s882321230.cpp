#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int n;

bool check(char data[8][8],int x,int y) {
	if (x >= 0 && x < 8 && y >= 0 && y < 8) {
		if (data[x][y] == '1') {
			return true;
		}
		else {
			return false;
		}

	}
	else {
		false;
	}
}

void bomb(char data[8][8], int x, int y) {
	if (check(data,x,y)== true) {
		data[x][y] = '0';
		if (check(data, x + 1, y)) {
			bomb(data, x+1, y);
		}
		if (check(data, x + 2, y)) {
			bomb(data, x + 2, y);
		}
		if (check(data, x + 3, y)) {
			bomb(data, x + 3, y);
		}
		if (check(data, x - 1, y)) {
			bomb(data, x - 1, y);
		}
		if (check(data, x - 2, y)) {
			bomb(data, x - 2, y);
		}
		if (check(data, x - 3, y)) {
			bomb(data, x - 3, y);
		}
		if (check(data, x, y + 1)) {
			bomb(data, x, y + 1);
		}
		if (check(data, x, y + 2)) {
			bomb(data, x, y + 2);
		}
		if (check(data, x, y + 3)) {
			bomb(data, x, y + 3);
		}
		if (check(data, x, y - 1)) {
			bomb(data, x, y - 1);
		}
		if (check(data, x, y - 2)) {
			bomb(data, x, y - 2);
		}
		if (check(data, x, y - 3)) {
			bomb(data, x, y - 3);
		}
	}
	else {
		return;
	}
}

int main() {
	cin >> n;
	char data[8][8];
	int x, y;
	getchar();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> data[j];
		}
		cin >> y;
		cin >> x;
		getchar();
		bomb(data, x - 1, y - 1);
		cout << "Data " << i + 1 << ":" << endl;
		for (int h = 0; h < 8; h++) {
			for (int g = 0; g < 8; g++) {
				cout << data[h][g];
			}
			cout << endl;
		}

	}

}

