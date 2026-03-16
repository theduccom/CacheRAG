#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<stdio.h>
#define INF 50000000
using namespace std;

int graf[20][20];
int kyo[20];
bool use[20];

void dijk(int ve, int st) {
	fill(kyo, kyo + ve, INF);
	fill(use, use + ve, false);
	kyo[st] = 0;

	while (1) {
		int v = -1;
		for (int i = 0;i < ve; i++) {
			if (!use[i] && (v == -1 || kyo[i] < kyo[v]))v = i;
		}
		if (v == -1)break;
		use[v] = true;
		for (int i = 0;i < ve;i++) {
			kyo[i] = min(kyo[i], kyo[v] + graf[v][i]);
		}
	}
	return;
}


int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++)graf[i][j] = INF;
	}

	for (int i = 0;i < m;i++) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		graf[a - 1][b - 1] = c;
		graf[b - 1][a - 1] = d;

	}
	int s, g, V, P;
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);
	int sum = 0;

	dijk(n, s - 1);
	sum += kyo[g - 1];

	dijk(n, g - 1);
	sum += kyo[s - 1];
	cout << V - P - sum << endl;
	return 0;
}