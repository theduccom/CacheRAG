#include <iostream>
using namespace std;
void uruu(int, bool&);

int main() {
	int a, b;
	bool not_first = false;

	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		bool flag = true;
		
		
		if (not_first)cout << endl;

		for (int i = a;i <= b;i++) {
			uruu(i, flag);
		}
		if (flag)cout << "NA" << endl;
		not_first = true;
	}

	return 0;
}

void uruu(int year, bool& flag) {
	if (year % 400 == 0) {
		cout << year << endl;
		flag = false;
		return;
	}
	else if (year % 100 == 0) {
		return;
	}
	else if (year % 4 == 0) {
		cout << year << endl;
		flag = false;
		return;
	}
	else {
		return;
	}
}