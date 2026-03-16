#include <bits/stdc++.h>
using namespace std;
 
constexpr int INF = 1e9;
 
int main() {
    int n, m;
    while(cin >> n >> m, n) {
        vector<vector<vector<int>>> d(2, vector<vector<int>>(m, vector<int>(m, INF)));
        for(int i=0; i<m; ++i) {
            d[0][i][i] = d[1][i][i] = 0;
        }
        for(int i=0; i<n; ++i) {
            int a, b, cost, time;
            cin >> a >> b >> cost >> time;
            a--; b--;
            d[0][a][b] = d[0][b][a] = cost;
            d[1][a][b] = d[1][b][a] = time;
        }
 
        for(int k=0; k<m; ++k) {
            for(int i=0; i<m; ++i) {
                for(int j=0; j<m; ++j) {
                    d[0][i][j] = min(d[0][i][j], d[0][i][k] + d[0][k][j]);
                    d[1][i][j] = min(d[1][i][j], d[1][i][k] + d[1][k][j]);
                }
            }
        }
 
        int k;
        cin >> k;
        for(int i=0; i<k; ++i) {
            int p, q, r;
            cin >> p >> q >> r;
            p--; q--;
            cout << d[r][p][q] << endl;
        }
    }
}