#include<iostream>
using namespace std;

int main() {
	double v;
	while (cin >> v) {
		double t = v / 9.8;
		double d = 4.9*t*t;
		for (int i = 1;; i++) {
			if (5 * i - 5 >= d) {
				cout << i << endl;
				break;
			}
		}
	}
}