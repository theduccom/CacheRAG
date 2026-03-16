#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; n; i++) {
			if (n & 1)cout << pow(2, i) << (n >> 1 ? ' ' : '\n');
			n >>= 1;
		}
	}
	return 0;
}