#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

//// < "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\a.txt" > "d:\d_download\visual studio 2015\projects\programing_contest_c++\debug\b.txt"

const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };

void solve(const int x, const int y, const int type, vector<vector<int>>&field) {
	field[y][x] = type;
	for (int i = 0; i < 4; ++i) {
		if (field[y + dy[i]][x + dx[i]] == -1) {
			solve(x + dx[i], y + dy[i], type, field);
		}
	}
}

int main() {
	while (1) {
		bool ok = true;
		vector<vector<int>>field(14, vector<int>(14));
		for (int i = 0; i < 12; ++i) {
			string st;
			if (cin >> st) {
				for (int j = 0; j < 12; ++j) {
					int num = (st[j] == '1');
					if (num)num = -1;
					field[i + 1][j + 1] = num;
				}
			}
			else {
				ok = false;
				break;
			}
			
		}
		if (!ok)break;
		int type = 1;
		for (int x = 1; x <= 12; ++x) {
			for (int y = 1; y <= 12; ++y) {
				if (field[y][x] == -1) {
					solve(x, y, type, field);
					type++;
				}
			}
		}
		cout << type - 1 << endl;
		
	}
	return 0;
}