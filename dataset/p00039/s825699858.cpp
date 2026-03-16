#include <bits/stdc++.h>
using namespace std;

int value[128];

void init() {
	value['I'] = 1;
	value['V'] = 5;
	value['X'] = 10;
	value['L'] = 50;
	value['C'] = 100;
	value['D'] = 500;
	value['M'] = 1000;
}

int main() {
	init();

	string number;
	while(cin >> number) {
		int res = 0;

		for(unsigned i = 0; i < number.size(); ++i) {
			if(i + 1 < number.size() && value[number[i]] < value[number[i + 1]]) {
				res -= value[number[i]];
			}
			else {
				res += value[number[i]];
			}
		}

		cout << res << endl;
	}

	return EXIT_SUCCESS;
}