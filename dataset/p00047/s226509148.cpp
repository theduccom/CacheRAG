#include <iostream>
#include <utility>
using namespace std;

int main() {
	bool cups[3] = {true, false, false};
	char c[2];
	char d;
	while (cin >> c[0] >> d >> c[1]) {
		swap(cups[c[0] - 'A'],cups[c[1] - 'A']);
	}
	for (int i = 0; i < 3; ++i) {
		if (cups[i]) {
			cout << char('A' + i) << endl;
		}
	}
	return 0;
}