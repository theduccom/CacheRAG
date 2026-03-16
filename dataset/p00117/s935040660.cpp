#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define INF 1000000000
int K[32][32];
int N, M, A, B, C, D, x1, x2, y1, y2;
int main(void) {
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            K[i][j] = INF;
        }
    }
    for (int i = 0; i < M; i++) {
        scanf("%d,%d,%d,%d", &A, &B, &C, &D);
        K[A][B] = C;
        K[B][A] = D;
    }
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (K[i][j] > K[i][k] + K[k][j]) {
                    K[i][j] = K[i][k] + K[k][j];
                }
            }
        }
    }
    scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
    cout << y1 - (K[x1][x2] + K[x2][x1]) - y2 << endl;
    return 0;
}