#include<bits/stdc++.h>

using namespace std;


int main() {
	int n, p, d1, d2, max, id;

	while (cin >> n, n) {
		max = 0;
		for (int i = 0; i < n; ++i) {
			cin >> p >> d1 >> d2;
			if ((d1 + d2) > max) {
				max = d1 + d2;
				id = p;
			}
		}
		cout << id << " " << max << endl;
	}

	return 0;
}
