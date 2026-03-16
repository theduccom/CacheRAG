#include <iostream>
using namespace std;

char map[10][10];

void check(int x, int y);

int main()
{
	int n;
	int x, y;

	cin >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < 8; j++){
			cin >> map[j];
		}
		cin >> x >> y;
		check(x - 1, y - 1); // (1,1) -> map[0][0]

		cout << "Data " << i + 1 << ":" << endl;
		for (int j = 0; j < 8; j++){
			cout << map[j] << endl;
		}
	}
}

void check(int x, int y)
{
	map[y][x] = '0';

	for (int i = 1; i <= 3; i++){
		if (y + i <= 7 && map[y + i][x] == '1'){
			check(x, y + i);
		}
		if (y - i >= 0 && map[y - i][x] == '1'){
			check(x, y - i);
		}
		if (x + i <= 7 && map[y][x + i] == '1'){
			check(x + i, y);
		}
		if (x - i >= 0 && map[y][x - i] == '1'){
			check(x - i, y);
		}
	}
}