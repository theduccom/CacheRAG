#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;


const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };
#include<unordered_map>
class HashVI {  // ???????????\??¢??°???????????§??????
public:
	
	size_t operator()(const vector<vector<int>> &x) const {
		const int C = 997;      // ?´???°
		size_t t = 0;
		for (int i = 0; i != x.size(); ++i) {
			for (int j = 0; j < x[i].size(); ++j) {
				t = t * C + x[i][j];
			}
		}
		return t;
	}
};
unordered_map<vector<vector<int>>, int, HashVI>mp;

int main() {
	vector<vector<int>>vs(2, vector<int>(4));
	vector<vector<int>>start{ { 0, 1, 2, 3 },{ 4,5,6,7 } };
	mp[start] = 0;
	queue<pair<vector<vector<int>>, int>>que;
	que.push(make_pair(start, 0));
	while (!que.empty()) {
		auto atop(que.front());
		que.pop();
		auto field(atop.first);
		pair<int, int>zero;
		for (int y = 0; y < 2; ++y) {
			for (int x = 0; x < 4; ++x) {
				if (field[y][x] == 0) {
					zero = make_pair(x, y);
				}
			}
		}
		int ans = 1e8;
		for (int way = 0; way < 4; ++way) {
			const int tx = zero.first + dx[way];
			const int ty = zero.second + dy[way];
			if (tx >= 0 && tx <= 3 && ty >= 0 && ty <= 1) {
				swap(field[ty][tx], field[zero.second][zero.first]);
				if (mp.find(field) == mp.end()) {
					que.push(make_pair(field, atop.second + 1));
					mp[field] = atop.second + 1;
				}
				swap(field[ty][tx], field[zero.second][zero.first]);
			}
		}
	}
	while (cin>>vs[0][0]) {
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (i || j)cin >> vs[i][j];
			}
		}
		int ans = mp[vs];
		cout << ans << endl;
		
		
	}
	return 0;
}