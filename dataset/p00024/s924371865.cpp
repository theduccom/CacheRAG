#include <bits/stdc++.h>
using namespace std;

int main() {
	double v,y;
	int n;
	while (cin >> v) {
		y = v*v / 19.6;
		n = (y-0.0000000001) / 5;
		cout << n+2 << endl;
	}
	return 0;
}