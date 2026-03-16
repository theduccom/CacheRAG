#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	double d[10];
	double a;
	while (cin >> a) {
		d[0] = a;
		d[1] = d[0] * 2;
		d[2] = d[1] / 3;
		d[3] = d[2] * 2;
		d[4] = d[3] / 3;
		d[5]=d[4] * 2;
		d[6] = d[5] / 3;
		d[7] = d[6] * 2;
		d[8] = d[7] / 3;
		d[9] = d[8] * 2;
		double ca=0;
		for (int i = 0; i < 10; i++) {
			ca += d[i];
		}
		cout << fixed << setprecision(9) << ca << endl;
	}
	return 0;
}