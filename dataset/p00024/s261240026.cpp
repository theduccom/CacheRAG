#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main() {
	double d;
	while (cin >> d) {
		for (int i = 1;; i++) {
			double y = sqrt(5.*(i - 1) / 4.9);
			if (9.8*y >= d) { cout << i << endl; break; }
		}
	}
	return 0;
}