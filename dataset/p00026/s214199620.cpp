#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int main() {
	int i,j,k,l,m,n,o,x,y,z;
	int max = 0;
	int count = 0;
	vector< vector<int> > s;
	s.resize(14);
	for (i = 0; i < 14; i++) {
		s[i].resize(14);
	}
	for (j = 0; j < 14; j++) {
		for (k = 0; k < 14; k++) {
			s[j][k] = 0;
		}
	}
	while (scanf("%d,%d,%d", &x, &y, &z)!=EOF) {
		if (z == 1) {
			s[x + 2][y + 2] += 1;
			s[x + 1][y + 2] += 1;
			s[x + 3][y + 2] += 1;
			s[x + 2][y + 1] += 1;
			s[x + 2][y + 3] += 1;
		}
		else if (z == 2) {
			for (l = x + 1; l <= x + 3; l++) {
				for (m = y + 1; m <= y + 3; m++) {
					s[l][m] += 1;
				}
			}
		}
		else if (z == 3) {
			for (l = x + 1; l <= x + 3; l++) {
				for (m = y + 1; m <= y + 3; m++) {
					s[l][m] += 1;
				}
			}
			s[x][y + 2] += 1;
			s[x + 4][y + 2] += 1;
			s[x + 2][y] += 1;
			s[x + 2][y + 4] += 1;
		}
	}
	for (n = 2; n < 12; n++) {
		for (o = 2; o < 12; o++) {
			if (max < s[n][o]) {
				max = s[n][o];
			}
			if (s[n][o] == 0) {
				count += 1;
			}
		}
	}
	cout << count << endl;
	cout << max << endl;
	return 0;
}