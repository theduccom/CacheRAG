#include "bits/stdc++.h"
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

#include<unordered_map>


int main() {
	int T; cin >> T;

	int k=0;
	while (T--) {
		k++;
		int dx[] = { -1,0,1,0 };
		int dy[] = { 0,1,0,-1 };
		vector<pair<int, int>>que;
		vector<vector<int>>field(8, vector<int>(8));
		for (int y = 0; y < 8; ++y) {
			string st; cin >> st;
			for (int x = 0; x < 8; ++x) {
				field[y][x] = st[x] - '0';

			}
		}

		int sx, sy; cin >> sx >> sy;
		sx--; sy--;
		{
			field[sy][sx]=0;
			que.push_back(make_pair(sx,sy));
		}
		while (!que.empty()) {
			auto q(que.back());
			que.pop_back();

			int ax=q.first;
			int ay=q.second;
			for (int way = 0; way < 4; ++way) {
				for (int num = 0; num <= 3; ++num) {
					int nx=ax+dx[way]*num;
					int ny=ay+dy[way]*num;

					if (nx >= 0 && nx <= 7 && ny >= 0 && ny <= 7) {
						if (field[ny][nx]) {
							field[ny][nx]=0;
							que.push_back(make_pair(nx,ny));
						}
					}
				}
			}
		}

		cout<<"Data "<<k<<":"<<endl;
		for (int y = 0; y < 8; ++y) {
			for (int x = 0; x < 8; ++x) {
				cout<<field[y][x];
			}
			cout<<endl;
		}
	}
	return 0;
}
