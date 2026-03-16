#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int cnt = 0;
		while (n) {
			n /= 5;
			cnt += n;
		}
		cout << cnt << endl;
	}
	return 0;
}