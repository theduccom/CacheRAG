#include <bits/stdc++.h>

using namespace std;

int SideLength[3];

bool judgeResult(int r) {
	int squareOfSide;

	sort(SideLength, SideLength + 3);
	squareOfSide = pow(SideLength[0], 2) + pow(SideLength[1], 2);
	
	if (squareOfSide < r*r * 4) {
		return true;
	}
	return false;
}

int main() {
	int n, r;

	while (1) {
		cin >> SideLength[0] >> SideLength[1] >> SideLength[2];
		if (SideLength[0] == 0 && SideLength[1] == 0 && SideLength[2] == 0) {
			break;
		}

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> r;
			if (judgeResult(r)) {
				cout << "OK" << endl;
			}
			else {
				cout << "NA" << endl;
			}
			
		}
	}


	return 0;
}
