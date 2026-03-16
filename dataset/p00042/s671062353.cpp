#include <iostream>

using namespace std;

int main() {
    int w, n;
    int value[1000], weight[1000];
    int dp[2][1001];
    for (int case_num=1; true; case_num++) {
        cin >> w;
        if (w == 0) {
            return 0;
        }
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> value[i];
            cin.ignore(1);
            cin >> weight[i];
        }
        for (int i=0; i<=1000; i++) {
            dp[1][i] = 0;
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<=w; j++) {
                if (weight[i] > j) {
                    dp[i%2][j] = dp[(i+1)%2][j];
                }
                else {
                    dp[i%2][j] = max(dp[(i+1)%2][j], dp[(i+1)%2][j-weight[i]]+value[i]);
                }
            }
        }
        for (int j=w; j>=0; j--) {
            if (dp[(n+1)%2][j] != dp[(n+1)%2][w]) {
                cout << "Case " << case_num << ':' << endl;
                cout << dp[(n+1)%2][w] << endl;
                cout << j+1 << endl;
                break;
            }
        }
    }
}