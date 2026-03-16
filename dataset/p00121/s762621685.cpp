#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define pii pair<int, int>
#define ll long long

struct state {
	string s;
	int c, p;
	state(){}
	state(string _s, int _c, int _p): s(_s), c(_c), p(_p) {}
};

queue<state> que;
int pz[2][4];
map<string, int> pz_ans;

void bfs()
{
	string s = "01234567";
	pz_ans.insert(mp(s,1));
	state st(s,1,0);
	que.push(st);
	int cnt, pos;

	while(!que.empty()) {
		st = que.front(); que.pop();
		s = st.s;
		cnt = st.c;
		pos = st.p;
		rep(i,0,2) rep(j,0,4) pz[i][j] = s[i*4+j];
		int y = pos/4;
		int x = pos%4;

		if (pos%4) { // left swap
			swap(pz[y][x], pz[y][x-1]);
			rep(i,0,8) s[i] = char(pz[i/4][i%4]);
			if (pz_ans[s] == 0) {
				pz_ans[s] = cnt;
				state t(s,cnt+1,pos-1);
				que.push(t);
			}
			swap(pz[y][x], pz[y][x-1]);
		}

		if (pos%4 < 3) { // right swap
			swap(pz[y][x], pz[y][x+1]);
			rep(i,0,8) s[i] = char(pz[i/4][i%4]);
			if (pz_ans[s] == 0) {
				pz_ans[s] = cnt;
				state t(s,cnt+1,pos+1);
				que.push(t);
			}
			swap(pz[y][x], pz[y][x+1]);
		}

		if (pos/4) { // up swap
			swap(pz[1][x], pz[0][x]);
			rep(i,0,8) s[i] = char(pz[i/4][i%4]);
			if (pz_ans[s] == 0) {
				pz_ans[s] = cnt;
				state t(s,cnt+1,pos-4);
				que.push(t);
			}
			swap(pz[1][x], pz[0][x]);
		}

		if (pos/4 == 0) { // down swap
			swap(pz[0][x], pz[1][x]);
			rep(i,0,8) s[i] = char(pz[i/4][i%4]);
			if (pz_ans[s] == 0) {
				pz_ans[s] = cnt;
				state t(s,cnt+1,pos+4);
				que.push(t);
			}
			swap(pz[0][x], pz[1][x]);
		}
	}
	s = "01234567";
	pz_ans.erase(s);
	pz_ans[s] = 0;
}

void input()
{
	string str;
	while(getline(cin,str)) {
		string::iterator end_it = remove(str.begin(), str.end(), ' ');
		str.erase(end_it, str.end());
		cout << pz_ans[str] << endl;
	}
}

int main(void)
{
	bfs();
	input();
	return 0;
}