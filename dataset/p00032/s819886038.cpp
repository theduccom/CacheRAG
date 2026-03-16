#include <iostream>
using namespace std;

int main() {
	char d;
	int count1 = 0;
	int count2 = 0;
	for (int a, b, c; cin >> a >> d >> b >> d >> c;) {
		if (a * a + b * b == c * c) {
			++count1;
		}
		else if (a * a - c * c / 4 == b * b - c * c / 4) {
			++count2;
		}
	}
	cout << count1 << endl << count2 << endl;
	return 0;
}