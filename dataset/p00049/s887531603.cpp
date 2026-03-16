#include <iostream>
using namespace std;

int main() {
	int bg[4] = { 0 };
	int d1;
	char d2;
	char b[3];
	while (cin >> d1 >> d2 >> b) {
		switch (b[0]) {
		case 'A':
			if (b[1]) {
				++bg[2];
			}
			else {
				++bg[0];
			}
			break;
		case 'B':
			++bg[1];
			break;
		case 'O':
			++bg[3];
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 4; ++i) {
		cout << bg[i] << endl;
	}
	return 0;
}