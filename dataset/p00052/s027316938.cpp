#include<iostream>
using namespace std;
int sum, n, x;
int main() {
	while (cin >> n) {
		if (!n) { break; }
		sum = 0;
		for (int i = 1; i <= n; i++) {
			x = i;
			while (x % 5 == 0) {
				sum++;
				x /= 5;
			}
		}
		cout << sum << endl;
	}
}