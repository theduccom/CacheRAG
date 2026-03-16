#include<iostream>
#include<iomanip>
using namespace std;
double a, sum;
int main() {
	while (cin >> a) {
		sum = a;
		for (int i = 2; i < 11; i++) {
			if (i % 2 == 0) {
				a *= 2;
			}
			else {
				a /= 3;
			}
			sum += a;
		}
		cout << fixed << setprecision(15) << sum << endl;
	}
}