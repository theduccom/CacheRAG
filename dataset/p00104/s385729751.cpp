#include<iostream>
using namespace std;

int main() {
	int x, y;
	while (cin >> x >> y, x, y) {
		char r[105][105];
		bool f[105][105];
		for (int i = 0;i < x;i++) {
			for (int j = 0;j < y;j++) {
				cin >> r[i][j];
				f[i][j] = false;
			}
		}

		int px = 0;
		int py = 0;
		int flg = 1;
		f[0][0] = true;

		while (1) {
			char a = r[px][py];
			if (a == '>') {
				py++;
				if (f[px][py] == true) {
					flg = 0;
					break;
				}
				else { f[px][py] = true; }
			}
			else if(a=='<'){
				py--;
				if (f[px][py] == true) {
					flg = 0;
					break;
				}
				else { f[px][py] = true; }
			}
			else if (a == 'v') {
				px++;
				if (f[px][py] == true) {
					flg =0 ;
					break;
				}
				else { f[px][py] = true; }
			}
			else if (a == '^') {
				px--;
				if (f[px][py] == true) {
					flg = 0;
					break;
				}
				else { f[px][py] = true; }
			}
			else { break; }
		}
		if (flg == 0)cout << "LOOP" << endl;
		else { cout << py << ' ' << px << endl; }

	}
	return 0;
}