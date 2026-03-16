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
	int tile[8];
	map<int, int> m[8];
		
	while (cin >> tile[0]) {
		FOR(i, 1, 8) cin >> tile[i];
		int ansT = encode(tile);
		
		if (m[tile[0]].find(ansT) != m[tile[0]].end()) {
			cout << m[tile[0]][ansT] << endl;
			continue;
		}
		
		set<int> s[8];
		queue<pii> que;
		int ans;
		
		REP(i, 8) tile[i] = i;
		
		que.push(pii(encode(tile), 0));
		while (!que.empty()) {
			int now = que.front().first;
			int cnt = que.front().second;
			que.pop();
			
			decode(now, tile);
			if (s[tile[0]].find(now) != s[tile[0]].end()) continue;
			
			s[tile[0]].insert(now);
			m[tile[0]][now] = cnt;
			
			if (now == ansT) { ans = cnt; break; }
			
			int x, y;
			REP(i, 8) if (tile[i] == 0) {
				x = i % 4;
				y = i / 4;
			}
			
			int dx[4] = {1,0,-1,0};
			int dy[4] = {0,1,0,-1};
			REP(i, 4) {
				int nx = x + dx[i], ny = y + dy[i];
				if (!(nx >= 0 && nx < 4 && ny >= 0 && ny < 2)) continue;
				
				swap(tile[y * 4 + x], tile[ny * 4 + nx]);
				que.push(pii(encode(tile), cnt + 1));
				swap(tile[y * 4 + x], tile[ny * 4 + nx]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}