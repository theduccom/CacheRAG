#include<bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i = 0; i < (a); i++)
#define reps(i, a, b) for(int i = (a); i < (b); i++)
#define INF 1e9
typedef vector<int> vi;
typedef vector<vi> vii;
typedef pair<int, int> pii;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
char memo[16434825];
class Data {
	public:
	vii status;
	pii zero;
	int cnt;
	Data(){}
	Data(vii status, pii zero,int cnt) : status(status), zero(zero), cnt(cnt){}
};
int to_s(vector<vi> s) {
	int ret = 0;
	int r = 1;
	rep(i, 8) {
		ret += s[i/4][i%4] * r;
		r *= 8;
	}
	return ret;
}
void solve() {
	memset(memo, -1, sizeof(memo));
	vii ans = {{0,1,2,3},{4,5,6,7}};
	queue<Data> Q;
	Q.push(Data(ans,make_pair(0, 0), 0));
	while(!Q.empty()) {
		auto d = Q.front(); Q.pop();
		int tmp = to_s(d.status);
		if(memo[tmp] != -1) continue;
		memo[tmp] = d.cnt;
		auto z = d.zero;
		rep(i, 4) {
			int nx = dx[i] + z.first, ny = dy[i] + z.second;
			if(nx < 0 || nx >= 4 || ny < 0 || ny >= 2) continue;
			auto p = d.status;
			swap(p[z.second][z.first], p[ny][nx]);
			Q.push(Data(p,make_pair(nx,ny), d.cnt + 1));
		}
	}
}
int main() {
	vii v = vii(2, vi(4, 0));
	solve();
	while(1) {
		cin >> v[0][0];
		if(cin.eof()) break;
		reps(i,1,8) cin >> v[i/4][i%4];
		printf("%d\n", memo[to_s(v)]);
	}
	return 0;
}