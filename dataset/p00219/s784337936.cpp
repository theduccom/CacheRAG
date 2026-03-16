#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n;
	while (cin >> n, n) {
		vector<int>v(10, 0);
		int c;
		for (int i = 0; i < n; i++) {
			cin >> c;
			v[c]++;
		}
		for (int i = 0; i < 10; i++) {
			if (v[i]) {
				for (int j = 0; j < v[i]; j++) {
					cout << '*';
				}
				cout << endl;
			}
			else {
				cout << '-' << endl;
			}
		}
	}
	return 0;
}