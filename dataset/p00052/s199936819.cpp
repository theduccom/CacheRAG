#include <iostream>

using namespace std;

int main() {
	int a;
	int counter;
	int counter2;
	int kari;
	bool hantei;
	while (true) {
		cin >> a;
		if (a == 0) {
			break;
		}
		counter = 0;
		for (int i = a; i > 4;) {
			kari = i;
			counter2 = 0;
			hantei = false;
			while(kari / 5 != 0) {
				if (kari % 5 != 0) {
					break;
				}
				kari /= 5;
				counter2++;
				hantei = true;
			}
			if (hantei) {
				//cout << i << " " << counter2 << endl;
				counter += counter2;
				i -= 5;
			} else {
				i -= (kari % 5);
			}
		}
		cout << counter << endl;
	}
	return 0;
}