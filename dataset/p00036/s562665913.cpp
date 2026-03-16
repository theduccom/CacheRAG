#include <cstdio>
#include <iostream>

using namespace std;

char map[8][9];

char solve() {
	for (int i=0; i<8; ++i) {
		for (int j=0; j<8; ++j) {
			if (map[i][j] == '1') {
				if (i<7 && j<7 && map[i][j+1]=='1' && map[i+1][j]=='1' && map[i+1][j+1]=='1') return 'A';
				if (i<5 && map[i+1][j]=='1' && map[i+2][j]=='1' && map[i+3][j]=='1') return 'B';
				if (j<5 && map[i][j+1]=='1' && map[i][j+2]=='1' && map[i][j+3]=='1') return 'C';
				if (i<6 && j>0 && map[i+1][j]=='1' && map[i+1][j-1]=='1' && map[i+2][j-1]=='1') return 'D';
				if (i<7 && j<6 && map[i][j+1]=='1' && map[i+1][j+1]=='1' && map[i+1][j+2]=='1') return 'E';
				if (i<6 && j<7 && map[i+1][j]=='1' && map[i+1][j+1]=='1' && map[i+2][j+1]=='1') return 'F';
				if (i<7 && j<7 && j>0 && map[i][j+1]=='1' && map[i+1][j]=='1' && map[i+1][j-1]=='1') return 'G';
			}
		}
	}
}

int main() {
	while (scanf("%s", map[0]) != EOF) {
		for (int i=1; i<8; ++i) scanf ("%s", map[i]);
		char ans = solve();
		printf ("%c\n", ans);
	}
	return 0;
}