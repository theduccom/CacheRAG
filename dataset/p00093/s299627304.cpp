#include<iostream>
using namespace std;

int main() {
	int a, b;
	bool flug = false;
	while (cin >> a >> b , a || b) {
		if (flug) cout << "\n";
		int count = 0;
		for (int i = a; i <= b; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
				cout << i << "\n";
				count++;
			}
		}
		if (count == 0) cout << "NA\n";
		flug = true;
	}
	return 0;
}