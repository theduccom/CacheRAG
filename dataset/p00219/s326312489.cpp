#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main() {
	int n;
	while (cin >> n, n) {
		int a[10]{};
		rep(i, n) {
			int t; cin >> t;
			a[t]++;
		}
		rep(i, 10) {
			if (a[i] == 0) puts("-");
			else { rep(j, a[i]) cout << '*'; cout << endl; }
		}
	}
	return 0;
}