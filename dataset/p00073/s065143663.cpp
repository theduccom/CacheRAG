#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double x, h;
	while (cin >> x >> h) {
		if (!x && !h)
			break;
		double hh = sqrt(pow(x / 2, 2) + pow(h, 2));
		double S = (x * hh / 2) * 4 + pow(x, 2);
		cout << fixed << setprecision(7) << S << endl;
	}
	return 0;
}