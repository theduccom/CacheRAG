#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n != 0) {
		int a, b=-1;
		for (int i = 0; i < n; i++) {
			int c, d, e;
			cin >> c >> d >> e;
			d += e;
			if (d > b) {
				a = c;
				b = d;
			}
		}
		cout << a << " " << b << endl;
	}
}