#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef pair<string, int> P;
map<string, int> m;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	queue<P> q;
	q.push(P("01234567", 0));
	m["01234567"] = 0;
	while(!q.empty()) {
		P p = q.front();
		q.pop();
		if(m[p.first] != p.second) continue;
		string s = p.first;
		int d[] = { 1, -1, 4, -4 };
		for(int i = 0; i < 8; i++) {
			if(s[i] != '0') continue;
			for(int j = 0; j < 4; j++) {
				if(d[j] == 1 && (i == 3 || i == 7)) continue;
				if(d[j] == -1 && (i == 0 || i == 4)) continue;
				if(d[j] == 4 && 4 <= i) continue;
				if(d[j] == -4 && i <= 3) continue;
				swap(s[i], s[i + d[j]]);
				if(m.find(s) == m.end() || p.second + 1 < m[s]) {
					m[s] = p.second + 1;
					q.push(P(s, p.second + 1));
				}
				swap(s[i], s[i + d[j]]);
			}
		}
	}

	string s;
	while(getline(cin, s)) {
		string ss;
		for(int i = 0; i < 8; i++) {
			ss += s[2 * i];
		}
		cout << m[ss] << endl;
	}
}