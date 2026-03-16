#include <bits/stdc++.h>

#define LL long long
#define VI vector<int>
#define VVI vector<vector<int>>
#define VVVI vector<vector<vector<int>>>
#define VB vector<bool>
#define VL vector<long long>
#define FOR(i,a,b) for(int i= (a); i<((int)b); ++i)
#define RFOR(i,a) for(int i=(a); i >= 0; --i)
#define FOE(i,a) for(auto i : a)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define MIN(v) *std::min_element(v.begin(), v.end())
#define MAX(v) *std::max_element(v.begin(), v.end())
#define EXIST(v,x) (std::find(v.begin(), v.end(), x) != v.end())
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define EPS 1e-14

const std::string YES = "YES";
const std::string Yes = "Yes";
const std::string NO = "NO";
const std::string No = "No";

bool inside(int y, int x, int H, int W) { return 0 <= y && y < H && 0 <= x && x < W; }

// 4近傍（右, 下, 左, 上）
const std::vector<int> dy = { 0, -1, 0, 1 };
const std::vector<int> dx = { 1, 0, -1, 0 };

using namespace std;


void solve(int W, int N, VI &v, VI &w) {
    VVI dp(N + 1, VI(W + 1, -1));
    dp[0][0] = 0;
    FOR(i, 0, N) {
        int value = v[i];
        int weight = w[i];

        FOR(j, 0, dp[0].size()) {

            if (dp[i][j] == -1) { continue; }

            // not use
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

            // use
            if (j + weight < dp[0].size()) {
                dp[i + 1][j + weight] = max(dp[i + 1][j + weight], dp[i][j] + value);
            }
        }
    }

    int ans_value = -1;
    int ans_weight = -1;
    FOR(j, 0, W + 1) {
        if (dp[N][j] > ans_value) {
            ans_value = dp[N][j];
            ans_weight = j;
        }
    }
    cout << ans_value << endl;
    cout << ans_weight << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int no = 1;
    while (true) {
        int W, N;
        cin >> W;
        if (W == 0) { break; }
        cin >> N;
        vector<int> v(N), w(N);
        FOR(i, 0, N) {
            char dummy;
            cin >> v[i];
            cin >> dummy;
            cin >> w[i];
        }
        cout << "Case " << no++ << ":" << endl;
        solve(W, N, v, w);
    }
    return 0;
}
