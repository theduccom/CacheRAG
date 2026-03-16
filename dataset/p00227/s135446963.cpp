#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int m,n;
	int a[1000];
	int kari;
	int sum;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = n-1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (a[j] < a[j+1]) {
					kari = a[j];
					a[j] = a[j+1];
					a[j+1] = kari;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if ((i + 1) % m != 0) {
				sum += a[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}