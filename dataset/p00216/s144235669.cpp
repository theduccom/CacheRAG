#include <iostream>
using namespace std;

int main(){
	int w, c;
	bool f;
	while (cin >> w && w != -1) {
		c = 1150;
		f = false;
		if (w > 30) {
			c += (w - 30) * 160;
			f = true;
		}
		if (w > 20) {
			if (f) {
				c += 1400;
			}
			else {
				c += (w - 20) * 140;
				f = true;
			}
		}
		if (w > 10) {
			if (f) {
				c += 1250;
			}
			else {
				c += (w - 10) * 125;
				f = true;
			}
		}
		cout << 4280 - c << endl;
	}

	return 0;
}