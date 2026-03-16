#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[3], n; double b, c;
int main() {
	while (true) {
		cin >> a[0] >> a[1] >> a[2];
		if (!a[0] && !a[1]) { break; }
		sort(a, a + 3);
		b = sqrt(a[0] * a[0] + a[1] * a[1]) / 2;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> c;
			if (b >= c) { cout << "NA" << endl; }
			else { cout << "OK" << endl; }
		}
	}
}