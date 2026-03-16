#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double min_h = 100000000, max_h = -100000000;
	double h;
	while(cin >> h) {
		min_h = min(min_h, h);
		max_h = max(max_h, h);
	}
	cout << max_h - min_h << endl;
}