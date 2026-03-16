#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int a,i,j;
	char str[8];
	vector<int> s, memo;
	s.resize(64);
	while (true) {
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				cin >> str[j];
				if (str[j] == '1') {
					a = 8 * i + j;
					memo.push_back(a);
				}
			}
		}
		if (cin.eof())break;
		if (memo[1] - memo[0] == 1) {
			if (memo[2] - memo[1] == 7) {
				cout << "A" << endl;
			}
			else if (memo[2] - memo[1] == 1) {
				cout << "C" << endl;
			}
			else if (memo[2] - memo[1] == 8) {
				cout << "E" << endl;
			}
			else if (memo[2] - memo[1] == 6) {
				cout << "G" << endl;
			}
		}
		else if (memo[1] - memo[0] == 8) {
			if (memo[2] - memo[1] == 8) {
				cout << "B" << endl;
			}
			else if (memo[2] - memo[1] == 1) {
				cout << "F" << endl;
			}
		}
		else if (memo[1] - memo[0] == 7) {
			cout << "D" << endl;
		}
		memo.clear();
	}
	return 0;
}