#include<iostream>
using namespace std;

int main() {
	int paper[10][10] = {0};
	int paint[][2] = { {0,-1}, {-1,0},{0,0},{1,0},{0,1},{-1,-1},{1,-1},{-1,1},{1,1},{0,-2},{-2,0},{2,0},{0,2}};
	int size[]={ 0,5,9,13 };
	int x, y, z;
	char dommy;
	int time;
	while (cin >> x >> dommy >> y >> dommy >> z) {
		for (int i = 0; i < size[z]; ++i) {
			if (x + paint[i][0] >= 0 && x + paint[i][0] < 10 && y + paint[i][1] >= 0 && y + paint[i][1] < 10) {
				++paper[x + paint[i][0]][y + paint[i][1]];
			}
		}
	}
	int answer=0, max=0;
	for (int i = 0; i < 10; ++i) {
		for (int i2 = 0; i2 < 10; ++i2) {
			if (paper[i][i2] == 0)++answer;
			else if (max < paper[i][i2]) {
				max = paper[i][i2];
			}
		}
	}
	cout << answer << endl << max << endl;
	return 0;
}