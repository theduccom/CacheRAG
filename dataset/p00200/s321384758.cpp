#include <iostream>
#include <algorithm>
using namespace std;

int N, M, K;
int stac[110][110], stat[110][110];
static const int INF = 100000000;

int main() {
	for(;;) {
		cin >> N >> M;
		if(!N && !M) {
			break;
		}
		for(int i = 0; i < 110; i++) {
			for(int j = 0; j < 110; j++) {
				stac[i][j] = stat[i][j] = INF;
			}
		}

		for(int i = 0; i < N; i++) {
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			stac[a][b] = stac[b][a] = cost;
			stat[a][b] = stat[b][a] = time;
		}

		for(int k = 1; k <= M; k++) {
			for(int i = 1; i <= M; i++) {
				for(int j = 1; j <= M; j++) {
					stac[i][j] = min(stac[i][j], stac[i][k] + stac[k][j]);
					stat[i][j] = min(stat[i][j], stat[i][k] + stat[k][j]);
				}
			}
		}

		cin >> K;
		for(int i = 0; i < K; i++) {
			int p, q, r;
			cin >> p >> q >> r;
			if(!r) {
				cout << stac[p][q] << endl;
			} else {
				cout << stat[p][q] << endl;
			}
		}
	}
	return 0;
}