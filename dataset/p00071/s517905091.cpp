#include<iostream>
using namespace std;
int x[30][30], n, p, q; char a;
int main() {
	cin >> n;
	for (int times = 1; times <= n; times++) {
		for (int i = 10; i < 18; i++) {
			for (int j = 10; j < 18; j++) {
				cin >> a; 
				if (a == '1') { x[i][j] = 1; }
				else { x[i][j] = 0; }
			}
		}
		cin >> q >> p; x[9 + p][9 + q] = 2;
		for (int i = 0; i < 100; i++) {
			for (int j = 10; j < 18; j++) {
				for (int k = 10; k < 18; k++) {
					if (x[j][k] == 2) {
						for (int l = -3; l < 4; l++) {
							if (x[j + l][k] == 1) { x[j + l][k] = 2; }
						}
						for (int l = -3; l < 4; l++) {
							if (x[j][k + l] == 1) { x[j][k + l] = 2; }
						}
						x[j][k] = 0;
					}
				}
			}
		}
		cout << "Data " << times << ':' << endl;
		for (int i = 10; i < 18; i++) {
			for (int j = 10; j < 18; j++) {
				cout << x[i][j];
			}
			cout << endl;
		}
	}
}