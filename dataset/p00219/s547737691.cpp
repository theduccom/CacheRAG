#include <iostream>
using namespace std;

int n, c[10];

int main(){
	int t;
	while (cin >> n &&n != 0) {
		fill(c, c + 10, 0);
		for (int i = 0; i < n; i++) {
			cin >> t;
			c[t]++;
		}
		for (int i = 0; i <= 9; i++) {
			if (c[i] == 0) {
				cout << "-" << endl;
			}
			else {
				for (int j = 0; j < c[i]; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}
	}

	return 0;
}