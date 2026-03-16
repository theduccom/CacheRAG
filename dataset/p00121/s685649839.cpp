#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
#define INF 10000
using namespace std;
short d[8][8][8][8][8][8][8][8];
int dpos[4] = { 1, -1, 4, -4 };

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b; *b = tmp;
	return;
}

void bfs() {
	vector<int> card(8);
	for (int i = 0; i < 8; ++i) card[i] = i;
	queue<vector<int> >  q;

	d[0][1][2][3][4][5][6][7] = 0;
	q.push(card);

	while (q.size()) {
		vector<int> b = q.front(); q.pop();

		int pos0;
		for (int i = 0; i < 8; ++i) if (b[i] == 0) pos0 = i;
		for (int i = 0; i < 4; ++i) {
			int npos = pos0 + dpos[i];

			if (0 <= npos && npos <= 7 && !(pos0 == 3 && npos == 4) && !(pos0 == 4 && npos == 3)) {
				vector<int> tmp = b;
				swap(&tmp[pos0], &tmp[npos]);
				if (d[tmp[0]][tmp[1]][tmp[2]][tmp[3]][tmp[4]][tmp[5]][tmp[6]][tmp[7]] == INF) {
					q.push(tmp);
					d[tmp[0]][tmp[1]][tmp[2]][tmp[3]][tmp[4]][tmp[5]][tmp[6]][tmp[7]] =
						d[b[0]][b[1]][b[2]][b[3]][b[4]][b[5]][b[6]][b[7]] + 1;
				}
			}
		}
	}
	return;
}

int main() {
	int min;
	vector<int> b(8);

	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			for (int k = 0; k < 8; ++k)
				for (int l = 0; l < 8; ++l)
					for (int m = 0; m < 8; ++m)
						for (int n = 0; n < 8; ++n)
							for (int o = 0; o < 8; ++o)
								for (int p = 0; p < 8; ++p)
									d[i][j][k][l][m][n][o][p] = INF;

	bfs();
	while (cin >> b[0]) {
		for (int i = 1; i < 8; ++i) cin >> b[i];
		cout << d[b[0]][b[1]][b[2]][b[3]][b[4]][b[5]][b[6]][b[7]] << endl;
	}
	return 0;
}