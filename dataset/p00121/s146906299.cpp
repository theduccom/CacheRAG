#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;
typedef pair<string, int> P;
map<string, int> m;
int d[] = { 1,-1,4,-4 };

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	queue<P> q;
	q.push(P("01234567", 0));
	m["01234567"] = 0;
	while (!q.empty()) {
		P p = q.front();
		q.pop();
		string s = p.first;

		for (int i = 0; i < 8; i++) {
			if (s[i] != '0') continue;
			for (int j = 0; j < 4; j++) {
				if (i + d[j] < 0 || 8 <= i + d[j]) continue;
				if (i == 3 && d[j] == 1 || i == 4 && d[j] == -1) continue;

				swap(s[i], s[i + d[j]]);
				if (m.find(s) == m.end()) {
					m[s] = p.second + 1;
					q.push(P(s, p.second + 1));
				}
				swap(s[i], s[i + d[j]]);
			}

		}
	}
	string s;
	while (getline(cin, s)) {
		string ss;
		for (int i = 0; i < 8; i++) {
			ss += s[2 * i];
		}
		cout << m[ss] << endl;
	}

}