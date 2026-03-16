#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#pragma warning(disable:4996)

int x[30][30], D[30];
int N, M, a, b, c, d;
int s, t, p, q;

int gr(int st, int go) {
	for (int i = 0; i < 30; i++) { D[i] = 1145141919; }
	D[st] = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (x[j][k] < 1145141919) {
					D[k] = min(D[k], D[j] + x[j][k]);
				}
			}
		}
	}
	return D[go];
}

int main() {
	while (cin >> N) {
		cin >> M;
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++) {
				x[i][j] = 1145141919;
			}
		}
		for (int i = 0; i < M; i++) {
			scanf("%d,%d,%d,%d", &a, &b, &c, &d);
			x[a][b] = c;
			x[b][a] = d;
		}
		scanf("%d,%d,%d,%d", &t, &s, &p, &q);
		
		cout << p - q - gr(s, t) - gr(t, s) << endl;
	}
	return 0;
}