#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iomanip>
#include<set>
#include<numeric>
#include<sstream>
#include<random>
#include<cassert>
#include<climits>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

const int limit = 2000;
int main() {
    int w;
    int c = 0;
    while (cin >> w && w) {
        c++;
        int n; cin >> n;
        int dp[limit] = {0};
        rep(i, n) {
            int v, ww; char ch;
            cin >> v >> ch >> ww;
            for (int i = 1000; i >= 0; --i) {
                if (dp[i]) chmax(dp[i + ww], dp[i] + v);
            }
            chmax(dp[ww], v);
        }
        int key = 0;
        rep(i, w + 1) if (dp[key] < dp[i]) key = i;
        cout << "Case " << c << ":" << endl;
        cout << dp[key] << endl << key << endl;
    }
    
}

