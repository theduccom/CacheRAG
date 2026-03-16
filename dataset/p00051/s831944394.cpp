#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	int n; cin >> n;
	while(n --) {
		string s; cin >> s;
		int p[8]; iota(p, p + 8, 0);
		int mi = stoi(s), ma = stoi(s);
		do {
			string t = "";
			for(int i = 0; i < 8; i ++)
				t += s[p[i]];
			mi = min(mi, stoi(t));
			ma = max(ma, stoi(t));
		} while(next_permutation(p, p + 8));
		cout << ma - mi << '\n';
	}

	return 0;
}