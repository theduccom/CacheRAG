#include<iostream>
#include<string>
char pos[100][100] = {};
int X, Y, mem[100][100] = {}, n, m;
int f(int x, int y) {
	if (mem[x][y] == 1) {
		return 1;
	}
	mem[x][y] = 1;
	if (pos[x][y] == '<') {
		if (y == 0)
			return 1;
		y -= 1;
	}
	else if (pos[x][y] == '>') {
		if (y == m - 1)
			return 1;
		y += 1;
	}
	else if (pos[x][y] == '^') {
		if (x == 0)
			return 1;
		x -= 1;
	}
	else if (pos[x][y] == 'v') {
		if (x == n - 1)
			return 1;
		x += 1;
	}
	else if (pos[x][y] == '.') {
		X = x;
		Y = y;
		return 0;
	}
	return f(x, y);
}
int main() {
	while (std::cin >> n >> m, n + m != 0) {
		X = 0, Y = 0;
		for (int i = 0; i < n; i += 1)
			for (int j = 0; j < m; j += 1) {
				std::cin >> pos[i][j];
				mem[i][j] = 0;
			}
		int ans = f(0, 0);
		if (ans == 1)
			std::cout << "LOOP" << std::endl;
		else std::cout << Y <<" "<< X << std::endl;
	}
	return 0;
}