#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (1) {
		bool check = false;
		for (int i = a; i <= b; i++) {
			if (i % 4 == 0 ) {
				if (i % 100 == 0 && i % 400 != 0) continue;
				check = true;
				cout << i << endl;
			}
		}
		if (check == false) cout << "NA" << endl;
		cin >> a >> b;
		if(a != 0 && b != 0) cout << endl;
		else break;
	}
	return 0;
}
