#include<iostream>
#include<string>
using namespace std;
int main() {
	bool a[10001];
	fill(a, a + 10001, true);
	a[0] = false; a[1] = false;
	for (int i = 2; i <= 10000; i++) {
		if (a[i]) {
			int j = 2;
			while (i*j <= 10000) {
				a[i*j] = false;
				j++;
			}
		}
	}
	int b;
	while (cin >> b&&b!=0) {
		for (int i = b; i >= 2; i--) {
			if (a[i] && a[i - 2]) {
				cout << i - 2 << " " << i << endl;
				break;
			}
		}
	}
}