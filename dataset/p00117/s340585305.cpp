#include <cstdio>
#include <algorithm>
using namespace std;
#define INF 1e9

int v, m;
int D[21][21];

void warshall_floyd(){
	for(int k = 1; k <= v; k++){
		for(int i = 1; i <= v; i++){
			for(int j = 1; j <= v; j++){
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
			}
		}
	}
}

int main(void){
	int x1, x2, y1, y2;
	int mon;
	scanf("%d\n%d", &v, &m);

	for(int i = 1; i <= v; i++){
		for(int j = 1; j <= v; j++){
			if(i == j)	continue;
			D[i][j] = INF;
		}
	}

	for(int i = 0; i < m; i++){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		D[a][b] = c;
		D[b][a] = d;
	}

	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	
	mon = y1 - y2;
	warshall_floyd();
	mon -= D[x1][x2] + D[x2][x1];
	printf("%d\n", mon);
  return 0;
}