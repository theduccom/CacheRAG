#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j, ctr1 = 0, ctr2 = 0;
	string s, ans;
	vector<string> ANS;
	bool B[8][8];

	while (1) {
		while (cin >> s) {
			for (i = 0; i < 8; i++) {
				B[ctr1][i] = stoi(s.substr(i, 1));
			}
			ctr1++; ctr2++;  if (ctr1 == 8)break;
		}

		for (i = 0; i < 7; i++) {//A
			for (j = 0; j < 7; j++) {
				if (B[i][j] == 1 && B[i][j + 1] == 1 && B[i + 1][j] == 1 && B[i + 1][j + 1] == 1)ans = 'A';
			}
		}

		for (i = 0; i < 5; i++) {//B
			for (j = 0; j < 7; j++) {
				if (B[i][j] == 1 && B[i + 1][j] == 1 && B[i + 2][j] == 1 && B[i + 3][j] == 1)ans = 'B';
			}
		}

		for (i = 0; i < 7; i++) {//C
			for (j = 0; j < 5; j++) {
				if (B[i][j] == 1 && B[i][j + 1] == 1 && B[i][j + 2] == 1 && B[i][j + 3] == 1)ans = 'C';
			}
		}

		for (i = 0; i < 6; i++) {//D
			for (j = 1; j < 8; j++) {
				if (B[i][j] == 1 && B[i + 1][j - 1] == 1 && B[i + 1][j] == 1 && B[i + 2][j - 1] == 1)ans = 'D';
			}
		}

		for (i = 0; i < 7; i++) {//E
			for (j = 0; j < 6; j++) {
				if (B[i][j] == 1 && B[i][j + 1] == 1 && B[i + 1][j + 1] == 1 && B[i + 1][j + 2] == 1)ans = 'E';
			}
		}

		for (i = 0; i < 6; i++) {//F
			for (j = 0; j < 7; j++) {
				if (B[i][j] == 1 && B[i + 1][j] == 1 && B[i + 1][j + 1] == 1 && B[i + 2][j + 1] == 1)ans = 'F';
			}
		}

		for (i = 0; i < 7; i++) {//G
			for (j = 1; j < 7; j++) {
				if (B[i][j] == 1 && B[i][j + 1] == 1 && B[i + 1][j - 1] == 1 && B[i + 1][j] == 1)ans = 'G';
			}
		}
		if (ctr2 == 0)break; ctr1 = 0;
		ANS.push_back(ans); ctr2 = 0;
	}
	for (i = 0; i < ANS.size(); i++)cout << ANS[i] << endl;
	return 0;
}