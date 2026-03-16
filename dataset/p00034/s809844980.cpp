#include <iostream>
using namespace std;

int main() {
	int l[10];
	int v1, v2;
	char d;
	while (cin >> l[0] >> d >> l[1] >> d >> l[2] >> d >> l[3] >> d >> l[4] >> d >> l[5] >> d >> l[6] >> d >> l[7] >> d >> l[8] >> d >> l[9] >> d >> v1 >> d >> v2) {
		double sum = 0;
		for (int i = 0; i < 10; ++i) {
			sum += l[i];
		}
		double p1 = v1 * sum / (v1 + v2);
		for (int i = 0; i < 10; ++i) {
			p1 -= l[i];
			if (p1 <= 0) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}