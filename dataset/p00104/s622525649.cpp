#include<iostream>
//#include<algorithm>
#include<string>
#include<vector>
//#include <cstring>
//#include <cstdio>
int main() {
	int a, b;
	while (std::cin >> a >> b, a + b != 0) {
		std::vector<std::vector<char>> ch(a, std::vector<char>(b));
		std::vector<std::vector<char>> ch2(a, std::vector<char>(b,0));
		int x=0, y=0;
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				std::cin >> ch[i][j];
			}
		}
		while (ch[x][y] != '.') {
			if (ch2[x][y] ==1) { std::cout << "LOOP" << std::endl; break; }
			ch2[x][y]++;
			if (ch[x][y] == '>')y++;
			else if (ch[x][y] == '<')y--;
			else if (ch[x][y] == '^')x--;
			else if (ch[x][y] == 'v')x++;
		}
		if (ch2[x][y] == 0)std::cout << y <<" "<<x<< std::endl;
	}
	return 0;
}