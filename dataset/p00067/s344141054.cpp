#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
int map[14][14];
void hoge(int x,int y) {
	map[x][y] = 0;
	if (map[x - 1][y] == 1)hoge(x - 1, y);
	if (map[x + 1][y] == 1)hoge(x + 1, y);
	if (map[x][y - 1] == 1)hoge(x, y - 1);
	if (map[x][y + 1] == 1)hoge(x, y + 1);
}
int main() {
	std::string s[12];
	int ans = 0;
	while (!std::cin.eof()) {
		for (int i = 0; i < 12; ++i)std::getline(std::cin,s[i]);
		ans = 0;
		for (int i = 1; i < 13; ++i) {
			for (int j = 1; j < 13; ++j) {
				map[i][j] = s[i - 1][j - 1]-'0';
			}
		}
		for (int i = 1; i < 13; ++i) {
			for (int j = 1; j < 13; ++j) {
				if (map[i][j] == 1) { ++ans; hoge(i,j); }
			}
		}
		std::cout << ans << std::endl;
		std::getline(std::cin, s[0]);
	}
	return 0;
}