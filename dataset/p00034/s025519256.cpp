#include<iostream>
using namespace std;
double l[11], a, b, sum, dis; char d;
int main() {
	while (cin >> l[1] >> d >> l[2] >> d >> l[3] >> d >> l[4] >> d >> l[5] >> d >> l[6] >> d >> l[7] >> d >> l[8] >> d >> l[9] >> d >> l[10] >> d >> a >> d >> b) {
		sum = 0;
		for (int i = 1; i <= 10; i++) {
			sum += l[i];
		}
		dis = 1.0*sum*(a / (a + b));
		sum = 0;
		for (int i = 1; i <= 10; i++) {
			sum += l[i];
			if (sum >= dis) { cout << i << endl; break; }
		}
	}
}