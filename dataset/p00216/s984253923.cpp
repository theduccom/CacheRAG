#include <iostream>
using namespace std;
int main(void){

	int w;
	while (cin >> w && w >= 0){

		int n = 1150;
		if (w > 30){

			n += 160 * (w - 30);
			w = 30;
		}
		if (w > 20){

			n += 140 * (w - 20);
			w = 20;
		}
		if (w > 10){

			n += 125 * (w - 10);
		}

		cout << 4280 - n << endl;
	}
}