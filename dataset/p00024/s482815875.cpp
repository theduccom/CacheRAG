#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	double d = 0.0;
	int ans;
	double n;

	while (cin >> d) {
		n = (4.9*pow((d / 9.8), 2) + 5) / 5;
		ans = ceil(n);
		cout << ans << endl;
	}

	return 0;
}