#include <iostream>
using namespace std;

int main() {
	int a, b, c, rec=0, dia=0;
	char com;
	while (cin >> a >> com >> b >> com >> c) {
		if (a * a + b * b == c * c) {
			rec++;
		}
		else if (a == b) {
			dia++;
		}
	}

	cout << rec << endl;
	cout << dia << endl;

	return 0;
}