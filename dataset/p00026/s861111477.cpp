#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

struct ToUpper {
	char operator()(char c) { return toupper(c); }
};

int num[20][20];

int main() {
	memset(num, 0, sizeof(num));
	string st;
	while (getline(cin, st)) {
		int x = st[0] - '0';
		int y = st[2] - '0';
		x += 5;
		y += 5;
		int size = st[4] - '0';

		for (int i = 0; i < 20; ++i) {
			for (int j = 0; j < 20; ++j) {
				if (size == 1) {
					int lim = 2;
					int sa = abs(i - y) + abs(j - x);
					if (sa < lim)num[i][j]++;
				}
				else if (size == 3) {
					int lim = 3;
					int sa = abs(i - y) + abs(j - x);
					if (sa < lim)num[i][j]++;
				}
				else {
					if (abs(i - y) <= 1 && abs(j - x) <= 1)num[i][j]++;
				}
				
			}
		}
	}
	int a = 0;
	int b = 0;
	for (int i = 5; i < 15; ++i) {
		for (int j = 5; j < 15; ++j) {
			if (!num[i][j])a++;
			b = max(b, num[i][j]);
		}
	}
	cout << a <<endl<< b << endl;
	return 0;
} 