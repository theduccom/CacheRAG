#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

vector<int> field(10*10);
int way[4] = { -1,1,-10,10 };

inline int xy2pos(int x, int y) {
	return x + y * 10;
}

void solve(int firstpos) {
	queue<int> bomb;
	bomb.push(firstpos);
	while (!bomb.empty()) {
		int kaboom = bomb.front(); bomb.pop();
		field[kaboom] = 0;
		for (int i = 0; i < 4; i++) {
			for (int n = 1; n <= 3; n++) {
				int pos = kaboom + n * way[i];
				if (field[pos] == -1) break;
				if (field[pos] == 1) 
					bomb.push(pos);
			}
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		fill(field.begin(), field.end(), -1);
		for (int y = 1; y <= 8; y++) 
			for (int x = 1; x <= 8; x++) {
				char c;
				cin >> c;
				field[xy2pos(x, y)] = c - '0';
			}
		int x, y;
		cin >> x >> y;
		solve(xy2pos(x,y));
		cout << "Data " << i + 1 << ":" << endl;
		for (int y = 1; y <= 8; y++) {
			for (int x = 1; x <= 8; x++)
				cout << field[xy2pos(x, y)];
			cout << endl;
		}
	}
	return 0;
}