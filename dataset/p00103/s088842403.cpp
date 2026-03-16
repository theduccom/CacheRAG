#include "bits/stdc++.h"
using namespace std;
int main() {
	int N; cin >> N;
	while (N--) {
		int score = 0;
		int out = 0;
		int run = 0;
		while (out <= 2) {
			string st; cin >> st;
			if (st == "OUT")out++;
			else if (st == "HIT") {
				run++;
				if (run > 3) {
					run = 3;
					score++;
				}
			}
			else {
				score += 1 + run;
				run = 0;
			}
		}
		cout << score << endl;
	}
	return 0;
}