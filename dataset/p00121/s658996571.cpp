
#include<cstdio>
#include<algorithm>
#include<map>
#include<string>
#include<queue>
using namespace std;
map<string, int> m;
int direction[] = { 1,-1,4,-4 };
void bfs() {
	queue<string> que;
	string s = "01234567";
	m[s] = 0;
	que.push(s);
	while (que.size()) {
		string curs = que.front();
		que.pop();
		int k = 0;
		for (; k < 8; k++) {
			if (curs[k] == '0')
				break;
		}
		for (int i = 0; i < 4; i++) {
			int nk = k + direction[i];
			if ((k == 3 && nk == 4) || (k == 4 && nk == 3))
				continue;
			if (nk >= 0 && nk <= 7) {
				string ss = curs;
				swap(ss[k], ss[nk]);
				if (m.find(ss) == m.end()) {
					que.push(ss);
					m[ss] = m[curs] + 1;
				}
			}
		}
	}
}
void solve(string s) {
	printf("%d\n", m[s]);
}
int main() {
	bfs();
	int cur[8];
	while (scanf("%d", &cur[0]) != EOF) {
		string s = "";
		s += (cur[0] + '0');
		for (int i = 1; i < 8; i++) {
			scanf("%d", &cur[i]);
			s += (cur[i] + '0');
		}
		solve(s);
	}
	return 0;
}