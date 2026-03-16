#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void q17() {
	vector<string> hints;
	hints.push_back("the");
	hints.push_back("this");
	hints.push_back("that");

	vector< vector<string> > shiftHints;
	for (int i = 0; i < 26; i++) {
		vector<string> iShiftHints;
		for (int j = 0; j < hints.size(); j++) {
			string tmp = "";
			for (int k = 0; k < hints[j].length(); k++) {
				tmp += ((hints[j][k] - 'a' + i) % 26) + 'a';
			}
			iShiftHints.push_back(tmp);
		}
		shiftHints.push_back(iShiftHints);
	}

	string str;
	for (; getline(cin, str);) {
		int s;
		bool flag = false;
		for (s = 0; s < 26; s++) {
			for (int i = 0; i < hints.size(); i++) {
				if (str.find(shiftHints[s][i]) != -1) {
					flag = true;
				}
			}
			if (flag) break;
		}

		string ans = "";
		for (int i = 0; i < str.length(); i++) {
			ans += isalpha(str[i]) ? (str[i] - 'a' - s + 26) % 26 + 'a' : str[i];
		}
		cout << ans << endl;
	}
}

int main() {
	q17();
	return 0;
}