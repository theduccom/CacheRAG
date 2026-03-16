#include <iostream>
using namespace std;

void big(int,int);
void medium(int,int);
void small(int,int);

int paper[10][10];

int main() {
	int x, y, num;
	char comma1, comma2;
	
	while (cin >> x >> comma1 >> y >> comma2 >> num) {
		switch (num) {
			case 1:
				small(x, y);
				break;
			case 2:
				medium(x, y);
				break;
			case 3:
				big(x, y);
				break;
			default:
				break;
		}
	}

	int count = 0, deep = 0;
	for (int i = 0; i < 10;i++) {
		for (int j = 0;j < 10;j++) {
			if (paper[i][j] == 0) count++;
			if (paper[i][j] > deep) deep = paper[i][j];
		}
	}

	cout << count << endl;
	cout << deep << endl;

	return 0;
}

void big(int x, int y) {
	medium(x, y);
	if (y + 2 < 10) paper[x][y + 2]++;
	if (y - 2 >= 0) paper[x][y - 2]++;
	if (x + 2 < 10) paper[x + 2][y]++;
	if (x - 2 >= 0) paper[x - 2][y]++;
	
	return;
}

void medium(int x, int y) {
	small(x, y);
	if (x + 1 < 10 && y + 1 < 10) paper[x + 1][y + 1]++;
	if (x - 1 >= 0 && y + 1 < 10) paper[x - 1][y + 1]++;
	if (x + 1 < 10 && y - 1 >= 0) paper[x + 1][y - 1]++;
	if (x - 1 >= 0 && y - 1 >= 0) paper[x - 1][y - 1]++;

	return;
}

void small(int x, int y) {
	paper[x][y]++;
	if (y + 1 < 10) paper[x][y + 1]++;
	if (y - 1 >= 0) paper[x][y - 1]++;
	if (x + 1 < 10) paper[x + 1][y]++;
	if (x - 1 >= 0) paper[x - 1][y]++;

	return;
}