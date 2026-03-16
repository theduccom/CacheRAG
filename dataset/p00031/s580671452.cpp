#include<iostream>
#include<cmath>
using namespace std;
int n, s;
int main() {
	while (cin >> n) {
		s = 0;
		for (int i = 0; i < 31; i++) {
			if (n % 2 == 1) {
				if (s) { cout << ' '; }
				cout << pow(2, i); s++;
				n -= 1;
			}
			n /= 2;
		}
		cout << endl;
	}
}