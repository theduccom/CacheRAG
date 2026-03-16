#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, init, n) for (int i = init; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<string> mp(12);
bool visited[12][12];

int bfs(int x, int y)
{
    queue<P> que;
    que.push(P{x, y});

    while (!que.empty())
    {
        P p = que.front();
        que.pop();

        rep(i, 4)
        {
            int nx = p.first + dx[i], ny = p.second + dy[i];

            if (nx < 0 || ny < 0 || 12 <= nx || 12 <= ny ) continue;
            if(visited[ny][nx] || mp[ny][nx] == '0') continue;

            visited[ny][nx] = true;

            que.push(P{nx, ny});
        }
    }

    return 1;
}

int main()
{
    while(cin >> mp[0])
    {
        rep(i, 11) cin >> mp[i + 1];
        rep(i, 12) rep(j, 12) visited[i][j] = false;

        int ans = 0;

        rep(y, 12) rep(x, 12)
        {
            if(visited[y][x] || mp[y][x] == '0') continue;

            ans += bfs(x, y);
        }

        cout << ans << endl;
    }

    return 0;
}
