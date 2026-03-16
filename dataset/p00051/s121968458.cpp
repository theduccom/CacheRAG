#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; cin >> n;
	rep(i, n) {
		string s; cin >> s;
		sort(s.begin(), s.end());
		int Min = stoi(s);
		reverse(s.begin(), s.end());
		cout << stoi(s) - Min << endl;
	}
	return 0;
}