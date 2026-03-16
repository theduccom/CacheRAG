#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)n;++i)

const int INF = 100000000;

unsigned int stat[110][110];
unsigned int stac[110][110];
int N, M, K;

int main() {
	while(cin >> N >> M && N && M) {
		for(int i = 0; i <= 100; i++) {
			for(int j = 0; j <= 100; j++) {
				stat[i][j] = INF;
				stac[i][j] = INF;
			}
		}
		rep(i, N) {
			int a, b, time, cost;
			cin >> a >> b >> cost >> time;
			stat[a][b] = time;
			stat[b][a] = time;
			stac[a][b] = stac[b][a] = cost;
		}
		for (int k = 1; k <= M; k++)
			for (int i = 1; i <= M; i++)
				for (int j = 1; j <= M; j++) {
					stat[i][j] = min(stat[i][j], stat[i][k] + stat[k][j]);
					stac[i][j] = min(stac[i][j], stac[i][k] + stac[k][j]);
				}

		cin >> K;
		rep(i, K) {
			int p, q, r;
			cin >> p >> q >> r;
			if(r == 0) {
				cout << stac[p][q] << endl;
			} else {
				cout << stat[p][q] << endl;
			}
		}
	}
	return 0;
}