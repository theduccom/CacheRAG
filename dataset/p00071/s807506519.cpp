#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<vector<int>>bakudan(8, vector<int>(8));
int xp[12]{-3,-2,-1,0,0,0,0,0,0,1,2,3};
int yp[12]{0,0,0,-3,-2,-1,1,2,3,0,0,0};
void shima(int x, int y) {
	bakudan[x][y] =0;
	for (int a = 0; a < 12; a++) {
		if (x + xp[a] > -1 && x + xp[a]<8 && y + yp[a]>-1 && y + yp[a] < 8&&bakudan[x+xp[a]][y+yp[a]])shima(x + xp[a], y + yp[a]);
	}
}
int main() {
	int k;
	cin >> k;
	vector<vector<vector<int>>>sss(k);
	for (int b = 1; b <= k; b++) {
		for (int l = 0; l < 8; l++) {
			for (int r = 0; r < 8; r++)bakudan[l][r] = 0;
		}
		for (int a = 0; a < 8; a++) {
			string c;
			cin >> c;
			for (int b = 0; b < 8; b++) {
				bakudan[a][b] = c[b] - 48;
			}
		}
		int d, e;
		cin >> d >> e;
		d--; e--;
		shima(e, d);
		sss[b - 1] = bakudan;
	}
	for (int g = 0; g < k; g++) {
		cout << "Data " << g + 1 << ":" << endl;
		for (auto f : sss[g]) {
			for (int h : f) {
				cout << h;
			}
			cout << endl;
		}
	}
}