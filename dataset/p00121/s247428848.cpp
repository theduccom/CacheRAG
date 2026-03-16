#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

struct puzzle {
	int f[8], space, cnt;
	bool operator<(const puzzle&p)const {
		rep(i, 8) {
			if (f[i] == p.f[i])continue;
			return f[i] < p.f[i];
		}
		return false;
	}
};
int dx[]{ 1,-1,0,0 }, dy[]{ 0,0,1,-1 };
map<int, int>ans;
queue<puzzle>que;
map<puzzle, bool>mp;

int main() {
	puzzle p = { { 0, 1, 2, 3, 4, 5, 6, 7 }, 0, 0 };
	ans[1234567] = 0;
	puzzle u, v;
	que.push(p);
	mp[p] = true;
	while (!que.empty()) {
		u = que.front(); que.pop();
		int s = 0, I = 10000000;
		rep(i, 8) {
			s += I * u.f[i];
			I /= 10;
		}
		if (s != 1234567 && ans[s] == 0)ans[s] = u.cnt;
		int sx = u.space / 4;
		int sy = u.space % 4;
		rep(i, 4) {
			int nx = sx + dx[i];
			int ny = sy + dy[i];
			if (nx < 0 || ny < 0 || nx >= 2 || ny >= 4)continue;
			v = u;
			swap(v.f[u.space], v.f[nx * 4 + ny]);
			v.space = nx * 4 + ny;
			if (!mp[v]) {
				mp[v] = true;
				v.cnt++;
				que.push(v);
			}
		}
	}
	while (1) {
		int s = 0, I = 10000000;
		rep(i, 8) {
			int d;
			if (!(~scanf("%d", &d)))return 0;
			s += I*d;
			I /= 10;
		}
		printf("%d\n", ans[s]);
	}
}