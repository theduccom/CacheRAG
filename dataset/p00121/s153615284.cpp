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
typedef pair<int, int> P;

map<int, int> m;
//char t[1 << 24];

int encode(const vector<int>& a) {
	int ret = 0;
	for(int i = 0; i < 8; i++) {
		ret <<= 3;
		ret |= a[i];
	}
	return ret;
}

void decode(int c, vector<int>& a) {
	for(int i = 0; i < 8; i++) {
		a[7 - i] = c & 7;
		c >>= 3;
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	/*for(int i = 0; i < 1 << 24; i++) {
		t[i] = 10000000;
		}*/
	vector<int> a(8);
	for(int i = 0; i < 8; i++) {
		a[i] = i;
	}
	queue<P> q;
	q.push(P(encode(a), 0));
	//t[encode(a)] = 0;
	m[encode(a)] = 0;
	while(!q.empty()) {
		P p = q.front();
		q.pop();
		if(m[p.first] < p.second) continue;
		//if(t[p.first] != p.second) continue;
		decode(p.first, a);
		int d[] = { 1, -1, 4, -4 };
		for(int i = 0; i < 8; i++) {
			if(a[i] != 0) continue;
			for(int j = 0; j < 4; j++) {
				if(d[j] == 1 && (i == 3 || i == 7)) continue;
				if(d[j] == -1 && (i == 0 || i == 4)) continue;
				if(d[j] == 4 && 4 <= i) continue;
				if(d[j] == -4 && i <= 3) continue;
				swap(a[i], a[i + d[j]]);
				int code = encode(a);
				/*if(p.second + 1 < t[code]) {
					t[code] = p.second + 1;
					q.push(P(code, p.second + 1));
					}*/
				if(m.find(code) == m.end() || p.second + 1 < m[code]) {
					m[code] = p.second + 1;
					q.push(P(code, p.second + 1));
				}
				swap(a[i], a[i + d[j]]);
			}
		}
	}
	string s;
	while(getline(cin, s)) {
		for(int i = 0; i < 8; i++) {
			a[i] = s[2 * i] - '0';
		}
		int code = encode(a);
		cout << m[code] << endl;
	}

}