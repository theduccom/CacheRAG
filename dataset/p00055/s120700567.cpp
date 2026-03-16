#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a, sum;
	while (cin >> a) {
		sum = a;
		for (int i = 2; i <= 10; i++) {
			if (i % 2 == 0)
				a = a * 2;
			else
				a = a / 3;
			sum += a;
		}
		cout << fixed << setprecision(8) << sum << endl;
	}
	return 0;
}