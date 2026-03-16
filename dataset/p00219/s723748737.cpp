#include <iostream>

using namespace std;

int main() {
	int n;

	while (cin >> n, n) {
		int sales[10] = {0};
		for (int i = 0; i < n; ++i) {
			int no; cin >> no;
			++sales[no];
		}

		for (int i = 0; i < 10; ++i)
			if (sales[i]) {
				for (int j = 0; j < sales[i]; ++j)
					cout << "*";
				cout << endl;
			}
			else
				cout << "-" << endl;
	}
}