#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool is_leap(int y) {
	return (y%400 == 0) || (y%4 == 0 && y%100 != 0);
}

int main() {
	bool first = true;
	while (true) {
		int a,b;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (first) {
			first = false;
		} else {
			cout << endl;
		}
		int delta = 1;
		bool have = false;
		for (int y = a;y <= b;y += delta) {
			if (is_leap(y)) {
				if (!have) {
					have = true;
				}
				if (delta == 1) {
					delta = 4;
				}
				cout << y << endl;
			}
		}
		if (!have) {
			cout << "NA" << endl;
		}
	}
}