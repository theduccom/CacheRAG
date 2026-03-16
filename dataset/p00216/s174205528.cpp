#include<iostream>
using namespace std;

int main() {
	int prev = 4280;
	int w;
	while (cin >> w && w != -1) {
		int price = 0;
		if (w > 30) {
			price += (w - 30) * 160;
			w = 30;
		}
		if (w > 20) {
			price += (w - 20) * 140;
			w = 20;
		}
		if (w > 10) {
			price += (w - 10) * 125;
			w = 10;
		}
		price += 1150;
		cout << prev - price << endl;
	}

	return 0;
}