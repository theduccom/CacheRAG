#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int x[1000][1000][2], n, m, a, b, c, d, q, e;

int path(int n, int s, int g) {
	int p[1000];
	memset(p, 127, sizeof(p));
	p[s] = 0;
	e = min(n, 9);
	for (int i = 0; i < e; i++){
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (x[j][k][1] < 10000000) {
					p[k] = min(p[k], p[j] + x[j][k][1]);
				}
			}
		}
	}
	return p[g];
}

int score(int n, int s, int g) {
	int p[1000];
	memset(p, 127, sizeof(p));
	p[s] = 0;
	e = min(n, 9);
	for (int i = 0; i < e; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (x[j][k][0] < 10000000) {
					p[k] = min(p[k], p[j] + x[j][k][0]);
				}
			}
		}
	}
	return p[g];
}

int main() {
	while (true) {
		memset(x, 127, sizeof(x));
		cin >> m >> n;
		if (m == 0 && n == 0) { break; }
		for (int i = 0; i < m; i++) {
			cin >> a >> b >> c >> d;
			x[a][b][0] = c;
			x[b][a][0] = c;
			x[a][b][1] = d;
			x[b][a][1] = d;
		}
		cin >> q;
		for (int i = 0; i < q; i++) {
			cin >> a >> b >> c;
			if (c == 0) { cout << score(n, a, b) << endl; }
			else { cout << path(n, a, b) << endl; }
		}
	}
}