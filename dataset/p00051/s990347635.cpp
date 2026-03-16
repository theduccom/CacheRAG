#include<iostream>
using namespace std;
int main() {
	int n, date[11],date2[11], a, kake,dai,syo,dai1,syo2;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		kake = 10000000;
		cin >> a;
		for (int z = 1; z <= 8; z++) {
			date[z] = a - a % kake;
			date[z] /= kake;
			a = a % kake;
			kake = kake / 10;
		}
		dai = -1;
		for (int m = 1; m <= 8; m++) {
			dai = -1;
			for (int z = 1; z <= 8; z++) {
				if (date[z] >= dai) {
					dai = date[z];
					dai1 = z;
				}
			}
			date[dai1] = -1;
			date2[m] = dai;
		}
		int aa, bb;
		aa = 0;
		bb = 0;
		kake = 10000000;
		for (int m = 1; m <= 8; m++) {
			aa = aa + kake * date2[m];
			kake /= 10;
		}
		kake = 10000000;
		for (int m = 8; m >= 1; m--) {
			bb = bb + kake * date2[m];
			kake /= 10;
		}
		cout << aa - bb << endl;
	}
}
