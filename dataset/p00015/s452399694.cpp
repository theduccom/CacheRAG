#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int N;
int size[2];
string num[3];

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num[0];
		cin >> num[1];

		size[0] = num[0].size();
		size[1] = num[1].size();
		if (size[0] > 80 || size[1] > 80) cout << "overflow" << endl;
		else {
			int sum = 0;
			bool kuriage = false;
			bool overflow = false;
			num[2] = "";
			for (int j = 0; j < 81; j++) {
				if (j == 80 && kuriage) {
					overflow = true;
					break;
				}
				if (j >= size[0] && j >= size[1] && !kuriage) break;
				
				if (kuriage) sum = 1;
				else sum = 0;
				
				if (j < size[0]) {
					sum += num[0][size[0] - j - 1] - '0';
				}
				if (j < size[1]) {
					sum += num[1][size[1] - j - 1] - '0';
				}
				
				if (sum >= 10) {
					sum -= 10;
					kuriage = true;
				} else kuriage = false;

				num[2] = (char)('0' + sum) + num[2];
			}
			if (overflow) cout << "overflow" << endl;
			else cout << num[2] << endl;
		}
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/