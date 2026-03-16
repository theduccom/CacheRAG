#include "bits/stdc++.h"
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
	char x, y, op; vector<bool> vec(3);
	vec[0] = true; vec[1] = false; vec[2] = false;
	while (cin >> x >> op >> y) {
		if (x == 'A' && y == 'B') swap(vec[0], vec[1]);
		if (x == 'B' && y == 'A') swap(vec[1], vec[0]);
		if (x == 'A' && y == 'C') swap(vec[0], vec[2]);
		if (x == 'C' && y == 'A') swap(vec[2], vec[0]);
		if (x == 'B' && y == 'C') swap(vec[1], vec[2]);
		if (x == 'C' && y == 'B') swap(vec[2], vec[1]);
	}
	rep(i, 3) if (vec[i] == true) {
		switch (i) {
		case 0: cout << "A" << endl; break;
		case 1: cout << "B" << endl; break;
		case 2: cout << "C" << endl; break;
		}
		break;
	}
	return 0;
}
