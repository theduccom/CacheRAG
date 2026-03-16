#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

#define Vint vector<int>
#define VVint vector<Vint>
#define Fsize() front().size()

int VVint_zero(VVint vv) {
	int num = 0;
	for (int i = 0; i < (int)vv.size(); i++) {
		for (int j = 0; j < (int)vv.Fsize(); j++) {
			if (vv[i][j] == 0) num++;
		}
	}
	return num;
}

int VVint_max(VVint vv) {
	int max = 0;
	for (int i = 0; i < (int)vv.size(); i++) {
		for (int j = 0; j < (int)vv.Fsize(); j++) {
			if (vv[i][j] > max) max = vv[i][j];
		}
	}
	return max;
}

int main() {
	int x, y, s;
	char cha;
	string str, str_x, str_y, str_s;
	VVint vec(10, Vint(10, 0));
	while (cin >> x >> cha >> y >> cha >> s) {
		vec[y][x] += 1;
		if (y - 1 >= 0) vec[y - 1][x]++;
		if (y + 1 < 10) vec[y + 1][x]++;
		if (x - 1 >= 0) vec[y][x - 1]++;
		if (x + 1 < 10) vec[y][x + 1]++;
		if (s >= 2) {
			if (y - 1 >= 0 && x - 1 >= 0) vec[y - 1][x - 1]++;
			if (y - 1 >= 0 && x + 1 < 10) vec[y - 1][x + 1]++;
			if (y + 1 < 10 && x - 1 >= 0) vec[y + 1][x - 1]++;
			if (y + 1 < 10 && x + 1 < 10) vec[y + 1][x + 1]++;
		}
		if (s == 3) {
			if (y - 2 >= 0) vec[y - 2][x]++;
			if (y + 2 < 10) vec[y + 2][x]++;
			if (x - 2 >= 0) vec[y][x - 2]++;
			if (x + 2 < 10) vec[y][x + 2]++;
		}
	}
	cout << VVint_zero(vec) << endl;
	cout << VVint_max(vec) << endl;
	return 0;
}
