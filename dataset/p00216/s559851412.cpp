#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	int n, a, b = 0;
	for (int h = 0; h < 200; h++) {
		cin >> a;
		if (a == -1) {
			cin >> n; return 0;
		}
		b += 1150;
		if (a > 10) {
			b += min(10, a - 10) * 125;
		}
		if (a > 20) {
			b += min(10, a - 20) * 140;
		}
		if (a > 30) {
			b += (a - 30) * 160;
		}
		cout << 4280 - b << endl;
		b = 0;
	}
	cin >> n;
}
