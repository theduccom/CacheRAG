#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

const double INF = 1e10;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	double min_h = INF, max_h = -INF;
	double h;
	while(cin >> h) {
		min_h = min(min_h, h);
		max_h = max(max_h, h);
	}
	cout << max_h - min_h << endl;
}