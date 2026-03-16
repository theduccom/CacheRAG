#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
const double PI = acos(-1.0);
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using edge = struct
{
    int to;
    int cost;
};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int costs[100][100];
int times[100][100];

void Warshall_Floyd(int N, int (&cost)[100][100])
{
    rep(k, N) rep(i, N) rep(j, N)
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
}

int main()
{
    int N, M;
    while (cin >> M >> N && N)
    {
        rep(i, 100) rep(j, 100) costs[i][j] = iINF;
        rep(i, 100) rep(j, 100) times[i][j] = iINF;

        rep(i, M)
        {
            int a, b, c, t;
            cin >> a >> b >> c >> t;
            a--;
            b--;

            costs[a][b] = min(costs[a][b], c);
            costs[b][a] = min(costs[b][a], c);

            times[a][b] = min(times[a][b], t);
            times[b][a] = min(times[b][a], t);
        }

        Warshall_Floyd(N, costs);
        Warshall_Floyd(N, times);

        int K;
        cin >> K;

        int p, q, r;

        rep(i, K)
        {
            cin >> p >> q >> r;
            p--;
            q--;

            cout << (r == 1 ? times[p][q] : costs[p][q]) << endl;
        }
    }

    return 0;
}
