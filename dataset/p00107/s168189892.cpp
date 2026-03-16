#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int l,w,h;
	int kaisu;
	double taikaku;
	int hankei;

	while (cin >> l >> w >> h) {
		if (l == 0 && w == 0 && h == 0) {
			break;
		}
		taikaku = sqrt(pow(w,2) + pow(h,2));
		cin >> kaisu;
		for (int i = 0; i < kaisu; i++) {
			cin >> hankei;
			if ((double)hankei * 2.0 > taikaku) {
				cout << "OK" << endl;
			} else {
				cout << "NA" << endl;
			}
		}
	}
	return 0;
}