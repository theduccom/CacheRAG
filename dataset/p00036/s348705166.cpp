#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

const int N = 11;
char c[N][N];

int main() {
	ios :: sync_with_stdio(0);

	while(cin >> c[1][1]) {
		for(int i = 1; i <= 8; i ++)
			for(int j = 1; j <= 8; j ++)
				if(i > 1 || j > 1) cin >> c[i][j];
		int xi = 9, yi = 9, xa = 0, ya = 0;
		for(int i = 1; i <= 8; i ++)
			for(int j = 1; j <= 8; j ++) if(c[i][j] == '1') {
				xi = min(xi, i);
				yi = min(yi, j);
				xa = max(xa, i);
				ya = max(ya, j);
			}
		int dx = xa - xi + 1, dy = ya - yi + 1;
		if(dx == 2 && dy == 2) cout << "A\n";
		if(dx == 4 && dy == 1) cout << "B\n";
		if(dx == 1 && dy == 4) cout << "C\n";
		if(dx == 3 && dy == 2) {
			if(c[xi][yi] == '0') cout << "D\n";
			else cout << "F\n";
		}
		if(dx == 2 && dy == 3) {
			if(c[xi][yi] == '1') cout << "E\n";
			else cout << "G\n";
		}
	}

	return 0;
}