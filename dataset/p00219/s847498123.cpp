#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	int kari;

	while (1) {
		int a[10] = {0};
		cin >> n;
		if (n == 0) {
			break;
		} else {
			for (int i = 0; i < n; i++) {
				cin >> kari;
				a[kari]++;
			}
			for (int i = 0; i < 10; i++) {
				if (a[i] == 0) {
					cout << "-" << endl;
				} else {
					for (int j = 0; j < a[i]; j++) {
						cout << "*";
					} 
					cout << endl;
				}
			}
		}
	}

	return 0;
}