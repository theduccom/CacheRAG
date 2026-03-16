#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int d[4] = {1,-1,4,-4};
map<string,int> m;
void bfs() {
	queue<string> q;
	q.push("01234567");
	while(!q.empty()) {
		string v = q.front(); q.pop();
		int pos = 0;
		rep(i,8) {
			if(v[i] == '0') pos = i;
		}
		rep(i,4) {
			if(0 <= pos+d[i] && pos+d[i] < 8 && !(pos == 3 && i == 0) && !(pos == 4 && i == 1)) {
				string s = v;
				swap(s[pos], s[pos+d[i]]);
				if(m[s] == 0) {
					q.push(s);
					m[s] = m[v]+1;
				}
			}
		}
	}
}

int main() {
	m["01234567"] = 1;
	bfs();
	char n;
	while(cin >> n) {
		string ret;
		ret += n;
		rep2(i,1,8) {
			cin >> n;
			ret += n;
		}
		cout << m[ret]-1 << endl;
	}
	return 0;
}