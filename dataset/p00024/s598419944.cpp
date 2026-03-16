#include <iostream>
using namespace std;

int main() {
	double v;
	while (cin >> v) {
		cout << int((4.9 * v * v / (9.8 * 9.8) + 5) / 5 + 1) << endl;
	}
	return 0;
}