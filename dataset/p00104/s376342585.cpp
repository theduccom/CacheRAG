#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };

int main() {
	map<char, int>mp;
	mp['<'] = 0;
	mp['v'] = 1;
	mp['>'] = 2;
	mp['^'] = 3;
	mp['.'] = 4;
	while (1) {
		int H, W; cin >> H >> W;
		if (!H)break;
		vector<vector<int>>field(H, vector<int>(W));
		for (int i = 0; i < H; ++i) {
			string st; cin >> st;
			for (int j = 0; j < W; ++j) {
				field[i][j] = mp[st[j]];
			}
		}
		int nx = 0;
		int ny = 0;
		for (int i = 0; i < 20000; ++i) {
			if (i == 19999) {
				nx = -1;
				break;
			}
			int a = field[ny][nx];
			if (a == 4) {
				break;
			}
			else {
				nx += dx[a];
				ny += dy[a];
			}
		}
		if (nx == -1) {
			cout << "LOOP" << endl;
		}
		else {
			cout << nx << " " << ny << endl;
		}
	}
	
	return 0;
}