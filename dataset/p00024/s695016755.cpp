#include <iostream>
using namespace std;
#define G 9.8

int main() {
	double v;
	while (cin >> v) {
		double y = v*v/G/2;
		int cnt=1;
		int h = 0;
		while (1) {
			if (y <= h) break;
			cnt++;
			h += 5;
		}

		cout << cnt << endl;
	}
	return 0;
}