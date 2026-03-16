#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a, x[9], b, c, n;
int main() {
	cin >> n;
	for (int h = 0; h < n;h++){
		cin >> a;
		for (int i = 7; i >= 0; i--) {
			x[i] = (a / (int)pow(10, i)) % 10;
		}
		sort(x, x + 8); b = 0; c = 0;
		for (int i = 0; i < 8; i++) {
			b += x[i] * (int)pow(10, i);
			c += x[7 - i] * (int)pow(10, i);
		}
		cout << b - c << endl;
	}
}