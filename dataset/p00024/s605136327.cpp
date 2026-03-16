#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double v, t, y;
	while (cin >> v) {
		for (int i = 1;; i++) {
			y = 5 * i - 5;
			t = sqrt(y / 4.9);
			if (v <= 9.8 * t) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
