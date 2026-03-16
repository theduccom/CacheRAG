#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <bitset>

#define First 0x01
#define Second 0x01 << 1
#define Third 0x01 << 2
#define Run 0x01 << 3

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		int out = 0, score = 0;
		unsigned field = 0;
		while (out < 3) {
			cin >> str;
			if (str == "HIT") {
				field = field << 1;
				field |= First;
				if (field & Run) {
					score++;
					field &= ~(Run);
				}
			}
			else if (str == "HOMERUN") {
				score++;
				if (field & First) score++;
				if (field & Second) score++;
				if (field & Third) score++;
				field = 0;
			}
			else if (str == "OUT") {
				out++;
			}
		}
		cout << score << endl;
	}
	return 0;
}