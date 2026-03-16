#include <iostream>
using namespace std;

int main() {
	int a, b;
	bool first = true;
	while (cin >> a >> b, a || b) {
		if (!first) {
			cout << endl;
		}
		else first = false;
		bool na = true;
		for (int i = a; i <= b; i++) {
			if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
				na = false;
				cout << i << endl;
			}
		}
		if (na) {
			cout << "NA" << endl;
		}
	}
}