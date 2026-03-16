#include <bits/stdc++.h>  

using namespace std;

//#define int long long
#define FOR(i, j, k) for(int i = j; i < (int)k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define INF (1 << 30)

typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> Pi;

const int MOD = 1e9 + 7;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};

template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

struct puzzle {
    string s;
    int now, cnt;
};

map<string, int> mp;

int bfs(puzzle m) {
    queue<puzzle> que;
    que.push(m);
    const int d[] = {1, -1, 4, -4};
    while(!que.empty()) {
        puzzle p = que.front(); que.pop();
        if(mp[p.s] != 0) continue;
        mp[p.s] = p.cnt;
        rep(i, 4) {
            int next = p.now + d[i];
            if(next < 0 || next >= 8) continue;
            if((p.now == 3 && d[i] == 1) || (p.now == 4 && d[i] == -1)) continue;
            puzzle tmp = p;
            swap(tmp.s[p.now], tmp.s[next]);
            tmp.now = next; ++tmp.cnt;
            que.push(tmp);
        }
    }
}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string t = "01234567";
    puzzle p = {t, 0, 0};
    bfs(p);
    char c;
    while(cin >> c) {
        int zero = 0;
        t[0] = c;
        rep(i, 7) {
            cin >> c;
            t[i + 1] = c;
            if(t[i + 1] == '0') {
                zero = i + 1;
            }
        }
        (t == "01234567") ? cout << 0 : cout << mp[t];
        cout << endl;
    }
    return 0;
}