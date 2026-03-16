#include <iostream>
using namespace std;

int n, m, e, j;

int main(){
	while (cin >> n && n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> m >> e >> j;
			if ((m == 100 || e == 100 || j == 100) || (m + e >= 180) || (m + e + j >= 240)) {
				cout << "A" << endl;
			}
			else if ((m + e + j >= 210) || (m + e + j >= 150 && (m >= 80 || e >= 80))) {
				cout << "B" << endl;
			}
			else {
				cout << "C" << endl;
			}
		}
	}

	return 0;
}