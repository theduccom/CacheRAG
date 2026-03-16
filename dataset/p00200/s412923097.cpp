#include <array>
#include <iostream>
using namespace std;

array<array<int, 210>, 210> costs;
array<array<int, 210>, 210> times;

int main() {
    int n, m;
    while (cin >> n >> m, n || m) {
        for (auto& ar : costs) ar.fill(1000000);
        for (auto& ar : times) ar.fill(1000000);
        for (int i = 0; i < n; i++) {
            int a, b, c, t;
            cin >> a >> b >> c >> t;
            a--; b--;
            costs[a][b] = costs[b][a] = c;
            times[a][b] = times[b][a] = t;
        }
        for (int i = 0; i < m; i++) {
            costs[i][i] = 0;
            times[i][i] = 0;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < m; k++) {
                    costs[j][k] = min(costs[j][k], costs[j][i] + costs[i][k]);
                    times[j][k] = min(times[j][k], times[j][i] + times[i][k]);
                }
            }
        }
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int p, q, r;
            cin >> p >> q >> r;
            p--; q--;
            if (r == 0) {
                cout << costs[p][q] << endl;
            }
            else {
                cout << times[p][q] << endl;
            }
        }
    }
    return 0;
}