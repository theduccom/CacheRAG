#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int t; cin >> t;
	while(t --) {
		int a[120];
		memset(a, 0, sizeof a);
		auto f = [&]() {
			string s; cin >> s;
			reverse(s.begin(), s.end());
			for(int i = 0; i < s.size(); i ++)
				a[i] += s[i] - '0';
		};
		f(); f();
		for(int i = 0; i + 1 < 120; i ++)
			if(a[i] >= 10) {
				a[i + 1] ++;
				a[i] -= 10;
			}
		int s = -1;
		for(int i = 0; i < 120; i ++)
			if(a[i]) s = i;
		if(s == -1)
			cout << 0 << '\n';
		else if(s >= 80)
			cout << "overflow\n";
		else {
			for(int i = s; i >= 0; i --)
				cout << a[i];
			cout << '\n';
		}
	}
	return 0;
}