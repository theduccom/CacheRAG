#include<iostream>
using namespace std;
int a, w;
int main() {
	while (true) {
		cin >> a;
		w = 1150;
		if (a == -1) { break; }
		for (int i = 0; i <= a; i++) {
			if (i > 30) { w += 160; }
			else if (i > 20) { w += 140; }
			else if (i > 10) { w += 125; }
		}
		cout << 4280 - w << endl;
	}
}