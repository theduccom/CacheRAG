#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

int main() {

	string a;
	int k;
	int n;

	while (cin >> a) {
		k = a.size();
		for (int i = 0; i < k; i++) {
			if (a[i] == '@') {
				n = a[i+1] - '0';
				for (int j = 0; j < n; j++) {
					cout << a[i+2];
				}
				i = i + 2;
			} else {
				cout << a[i];
			}
		}
		cout << endl;
	}

	return 0;
}