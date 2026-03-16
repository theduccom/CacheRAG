#include<cstdio>
#include<iostream>

using namespace std;
#define INF 99
	
int n, m, i, j, a, b, c, d, start, goal, money, hashira, minroot, tax[102][102] = {}, root[102] = {}, used[102] = {};

int main() {

	cin >> n >> m;
	//?????????
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) tax[i][j] = INF;
		tax[i][i] = 0;
		root[i] = INF;
		used[i] = 0;
	}
	//?????????????????¨?????\???
	for (i = 0; i < m; i++) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		tax[a][b] = c;
		tax[b][a] = d;
	}
	//????????????,??´??????,????????????????????????,??±????????¨
	scanf("%d,%d,%d,%d", &start, &goal, &money, &hashira);

	money -= hashira;
	//?????????????????????stert???goal
	root[start] = 0;
	while (1) {
		minroot = INF;
		for (i = 1; i <= n; i++) {
			if (used[i] == 0 && root[i] < minroot) {
				minroot = root[i];
				j = i;
			}
		}
		if (j == goal) {
			break;
		}
		else {
			used[j] = 1;
			for (i = 1; i <= n; i++) {
				if (root[j] + tax[j][i] < root[i]) root[i] = root[j] + tax[j][i];
			}
		}
	}
		//???????????´??°
		money -= root[goal];

		//?????????
		for (i = 1; i <= n; i++) {
			root[i] = INF;
			used[i] = 0;
		}
		//?????????????????????goal???start
		root[goal] = 0;
		while (1) {
			minroot = INF;
			for (i = 1; i <= n; i++) {
				if (used[i] == 0 && root[i] < minroot) {
					minroot = root[i];
					j = i;
				}
			}
			if (j == start) {
				break;
			}
			else {
				used[j] = 1;
				for (i = 1; i <= n; i++) {
					if (root[j] + tax[j][i] < root[i]) root[i] = root[j] + tax[j][i];
				}
			}
		}
			money -= root[start];
		
		cout << money << endl;
		return 0;
	
}