#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int n;

	while (cin >> n) {

		bool f1 = false;

		for (int j = n - 1; j > 1; j--) {
			for (int i = 2; i <= sqrt(j); i++) {
				if ((j % i) == 0) {
					f1 = true;
					break;
				}
			}
			if (!f1) {
				cout << j << " ";
				break;
			}
			f1 = false;
		}

		bool f2 = false;

		for (int j = n + 1; true; j++) {
			for (int i = 2; i <= sqrt(j); i++) {
				if ((j % i) == 0) {
					f2 = true;
					break;
				}
			}
			if (!f2) {
				cout << j << endl;
				break;
			}
			f2 = false;
		}
	}
}