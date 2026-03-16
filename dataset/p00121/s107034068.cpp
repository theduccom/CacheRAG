#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

typedef pair<int, int> pii;

int encode(int *tile) {
	int res = tile[0];
	
	FOR(i, 1, 8) {
		res <<= 3;
		res |= tile[i];
	}
	return res;
}

void decode(int x, int *tile) {
	for (int i = 7; i >= 0; i--) {
		tile[i] = x & 7;
		x >>= 3;
	}
}

int main() {
	map<int, int> m;
	int tile[8];
	
	REP(i, 8) tile[i] = i;
	
	queue<pii> que;
	que.push(pii(encode(tile), 0));
	while (!que.empty()) {
		int now = que.front().first;
		int t = que.front().second;
		que.pop();
		
		if (m.find(now) != m.end()) continue;
		
		m[now] = t;
		decode(now, tile);
		
		int x, y;
		REP(i, 8) if (tile[i] == 0) {
			x = i % 4;
			y = i / 4;
			break;
		}
		
		int dx[4] = {1,0,-1,0};
		int dy[4] = {0,1,0,-1};
		REP(i, 4) {
			int nx = x + dx[i], ny = y + dy[i];
			if (!(nx >= 0 && nx < 4 && ny >= 0 && ny < 2)) continue;
			swap(tile[y * 4 + x], tile[ny * 4 + nx]);
			que.push(pii(encode(tile), t + 1));
			swap(tile[y * 4 + x], tile[ny * 4 + nx]);
		}
	}
	
	while (cin >> tile[0]) {
		FOR(i, 1, 8) cin >> tile[i];
		cout << m[encode(tile)] << endl;
	}
	
	return 0;
}