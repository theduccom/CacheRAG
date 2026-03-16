#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main(){
	int n; cin >> n;
	rep(i, n) {
		int a[3]{};
		int cnt = 0, out = 0;
		while (1) {
			string s; cin >> s;
			if (s == "HIT") {
				if (a[2]) { a[2] = 0; cnt++; }
				for (int i = 2; i >= 1; i--)if (a[i - 1]) { a[i] = 1; a[i - 1] = 0; }
				a[0] = 1;
			}
			if (s == "HOMERUN") { cnt++; rep(i, 3)if (a[i]) { a[i] = 0; cnt++; } }
			if (s == "OUT") { if (out == 2) { cout << cnt << endl; break; } out++; }
		}
	}
	return 0;
}