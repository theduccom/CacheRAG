#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int f(char c) {
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	return 1000;
}

int main() {
	ios :: sync_with_stdio(0);

	for(string s; cin >> s; ) {
		int ans = 0;
		for(int i = 0; i < s.size(); i ++) {
			if(i + 1 < s.size() && f(s[i]) < f(s[i + 1]))
				ans -= f(s[i]);
			else
				ans += f(s[i]);
		}
		cout << ans << '\n';
	}

	return 0;
}