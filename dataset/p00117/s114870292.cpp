#include <iostream>
#include <cstdio>

using namespace std;
int N, M, A, B, C, D, x1, x2, y1, y2;
int K[30][30];
int ans;
const int infty = 10000000;

int main() {
  // 初期化
  for (int i=0; i<30; i++) {
    for (int j=0; j<30; j++) {
      K[i][j] = infty;
    }
  }
  // 入力
  scanf("%d%d", &N, &M);
  for (int i=0; i<M; i++) {
    scanf("%d,%d,%d,%d", &A, &B, &C, &D);
    K[A][B] = C;
    K[B][A] = D;
  }
  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  // Floyd-Warshall アルゴリズム
  for (int k=1; k<=N; k++) {
    for (int i=1; i<=N; i++) {
      for (int j=1; j<=N; j++) {
	if (K[i][j] > K[i][k] + K[k][j]) {
	  K[i][j] = K[i][k] + K[k][j];
	} 
      }
    }
  }
  ans = y1 - y2 - K[x1][x2] - K[x2][x1];
  printf("%d\n", ans);
}