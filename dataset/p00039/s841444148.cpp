#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;

int func(char ch) {
	switch (ch) {
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	}
}

int main() {
	string s;
	while (cin >> s) {
		int sum = func(s.at(s.size() - 1));
		for (int i = s.size() - 1; i > 0; i--) {
			int a = func(s.at(i - 1)),
				b = func(s.at(i));

			if (a < b) {
				sum -= a;
			}
			else {
				sum += a;
			}
		}

		cout << sum << endl;
	}
}
