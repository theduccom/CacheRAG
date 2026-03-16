#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

#define WMAX 1000
#define NMAX 1000
int main(void)
{
    int W, n;
    int cyc = 0;
    while (cin >> W && W && cin >> n) {
        cyc++;
        int dp[WMAX+1][NMAX+1] = {};
        for (int i = 0; i < n; i++) {
            int v, w;
            scanf("%d,%d", &v, &w);
            for (int j = 0; j < W+1; j++)
                dp[j][i+1] = max(dp[j][i], (j-w >= 0 ? dp[j-w][i] + v : 0));
        }
        cout << "Case " << cyc << ":" << endl;
        for (int j = 0; j < W+1; j++) {
            if (dp[j][n] == dp[W][n]) {
                cout << dp[j][n] << endl << j << endl;
                break;
            }
        }
    }
}