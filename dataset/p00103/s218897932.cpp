#include <iostream>
#include <string>
#include <queue>
using namespace std;
 
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0103 

int main() {
	int n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		queue<int> q;
		int ans = 0;
		int out = 0;
		while (true) {
			string s;
			cin >> s;
			if (s == "HIT") {
				q.push(1);
				if (q.size() > 3) {
					ans++;
					q.pop();
				}
			} else if (s == "HOMERUN") {
				while (q.size() > 0) {
					if (q.front() == 1) ans++;
					q.pop();
				}
				ans++;
			} else {
				out++;
				if (out == 3) break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}