

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool uru[3000];

void q93() {
	memset(uru, 0, sizeof(uru));
	for (int i = 0; i < 3000; i += 4) {
		uru[i] = true;
	}
	for (int i = 0; i < 3000; i += 100) {
		uru[i] = false;
	}
	for (int i = 0; i < 3000; i += 400) {
		uru[i] = true;
	}

	int a, b;
bool first = true;
	for (; cin >> a >> b;) {
		if (a == b && !a) break;
if (first) first = false;
else cout << endl;
		bool print_flag = false;
		for (int i = a; i <= b; i++) {
			if (uru[i]) {
				cout << i  << endl;
				print_flag = true;
			}
		}
		if (!print_flag) cout << "NA" << endl;
	}
}
int main() {
	q93();
	return 0;
}