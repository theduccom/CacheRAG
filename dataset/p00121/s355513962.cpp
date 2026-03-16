#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <functional>
#include <queue>
#include <set>
#include <map>

using namespace std;
typedef long long LL;
typedef pair<string, int> P;
const int MAXN = 305;
const int INF = 0x3f3f3f3f;
//const int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
const int dir[4] = { -1, 1, 4, -4 };

map<string, int> mp;
int ans;

void bfs() {
    string source = "01234567";
    queue<P> que;
    que.push(P(source, 0));
    mp[source] = 0;
    while (!que.empty()) {
        P p = que.front(); que.pop();
        string str = p.first;
        int pos = p.second;
        for (int i = 0; i < 4; ++i) {
            int npos = pos + dir[i];
            if (0 <= npos && npos < 8 && !(pos == 3 && npos == 4) && !(pos == 4 && npos == 3)) {
                string nstr = str;
                swap(nstr[npos], nstr[pos]);
                if (mp.find(nstr) == mp.end()) {
                    que.push(P(nstr, npos));
                    mp[nstr] = mp[str] + 1;
                }
            }
        }
    }
}

int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    string maze;
    bfs();
    while (getline(cin, maze)) {
        maze.erase(remove(maze.begin(), maze.end(), ' '), maze.end());
        ans = mp[maze];
        printf("%d\n", ans);
    }
    return 0;
}
