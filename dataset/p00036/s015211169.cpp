#include<iostream>
#include<cstring>
using namespace std;
int x[13][13]; char a;
int main() {
	while (cin >> a) {
		memset(x, 0, sizeof(x));
		if (a == '0') { 
			x[1][1] = 0; 
		}
		if (a == '1') { 
			x[1][1] = 1; 
		}
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				if (i + j > 2) {
					cin >> a; if (a == '0') { x[i][j] = 0; }
					else { x[i][j] = 1; }
				}
			}
		}
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				if (x[i][j] == 1) {
					if (x[i + 1][j] == 1 && x[i][j + 1] == 1 && x[i + 1][j + 1] == 1) {
						cout << 'A' << endl; goto Exit;
					}
					if (x[i + 1][j] == 1 && x[i + 2][j] == 1 && x[i + 3][j] == 1) {
						cout << 'B' << endl; goto Exit;
					}
					if (x[i][j + 1] == 1 && x[i][j + 2] == 1 && x[i][j + 3] == 1) {
						cout << 'C' << endl; goto Exit;
					}
					if (x[i + 1][j - 1] == 1 && x[i + 1][j] == 1 && x[i + 2][j - 1] == 1) {
						cout << 'D' << endl; goto Exit;
					}
					if (x[i][j + 1] == 1 && x[i + 1][j + 1] == 1 && x[i + 1][j + 2] == 1) {
						cout << 'E' << endl; goto Exit;
					}
					if (x[i + 1][j] == 1 && x[i + 1][j + 1] == 1 && x[i + 2][j + 1] == 1) {
						cout << 'F' << endl; goto Exit;
					}
					if (x[i][j + 1] == 1 && x[i + 1][j - 1] == 1 && x[i + 1][j] == 1) {
						cout << 'G' << endl; goto Exit;
					}
				}
			}
		}
	Exit:;
	}
}