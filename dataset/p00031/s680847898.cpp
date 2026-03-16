#include<iostream>
using namespace std;
int n, flg;
int main() {
	while (cin >> n) {
		flg = 0;
		for (int i = 1; n > 0; i *= 2) {
			if (n & 1) {
				if (flg > 0)
					cout << ' ';
				cout << i;
				flg = 1;
			}
			n = n >> 1;
		}
		cout << endl;
	}
	return 0;
}