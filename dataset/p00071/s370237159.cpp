#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int h[8][8];
	for (int z = 0; z < n; z++) {
		bool b[14][14];
		int c=0;
		string d;
		for (int i = 0; i < 8; i++) {
			cin >> d;
			for (int j = 0; j < 8; j++) {
				h[i][j] = (int)d[j] - '0';
				b[i + 3][j + 3] = false;
				if (h[i][j] == 1) c++;
			}
		}
		int x, y;
		cin >> x >> y;
		x--; y--;
		int l = x;
		x = y;
		y = l;
		b[x+3][y+3] = true;
		for (int i = 0; i < c; i++) {
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (b[i+3][j+3] == true && h[i][j] == 1) {
						b[i + 3][j + 4] = true; b[i + 3][j + 5] = true; b[i + 3][j + 6] = true;
						b[i + 3][j + 2] = true; b[i + 3][j + 1] = true; b[i + 3][j] = true;
						b[i + 4][j + 3] = true; b[i + 5][j + 3] = true; b[i + 6][j + 3] = true;
						b[i + 2][j + 3] = true; b[i + 1][j + 3] = true; b[i][j + 3] = true;
						h[i][j] = 0; 
					}
				}
			}
		}
		cout << "Data " << z + 1 <<":"<< endl;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << h[i][j];
			}
			cout << endl;
		}
	}
}