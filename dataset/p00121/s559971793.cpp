//
// Created by yijiezhu on 12/21/16.
//
#include <iostream>
#include <queue>
#include <set>
#include <map>

using namespace std;

int delta[] {-1, 1, -4, 4};
map<int, int> dp;

void bfs(int origin) {
    queue<int> que;
    que.push(origin);
    dp.insert(make_pair(origin, 0));

    while (!que.empty()) {
        int v = que.front(); que.pop();
        int z(0);
        for (int i = 1; i < 8; i++) {
            if ((v >> (i << 2) & 0xF) == 0) z = i;
        }
        for (int q = 0; q < 4; q++) {
            if (z == 4 && delta[q] == -1) continue;
            if (z == 3 && delta[q] == 1) continue;
            int nz = z + delta[q];
            if (nz < 0 || nz >= 8) continue;
            int nk = 0;
            for (int j = 0; j < 8; j++) {
                int t = v >> (j << 2) & 0xF;
                if      (j == z)  nk |= t << (nz << 2);
                else if (j == nz) nk |= t << (z << 2);
                else              nk |= t << (j << 2);
            }
            if (dp.find(nk) == dp.end()) {
                que.push(nk);
                dp[nk] = dp[v] + 1;
            }
        }
    }
}

void print(int k) {
    for (int i = 0; i < 8; i++) {
        cout << (k >> (i << 2) & 0xF);
    }
}

int main() {
    // freopen("wa.out", "w", stdout);
    int origin = 0;
    for (int i = 0; i < 8; i++) {
        origin |= i << (i << 2);
    }
    bfs(origin);
    /*for (auto p : dp) {
        print(p.first); cout << " " << p.second << endl;
    }*/
    int k = 0;
    while (~scanf("%d", &k)) {
        for (int i = 1; i < 8; i++) {
            int t;
            scanf("%d", &t);
            k |= t << (i << 2);
        }
        cout << dp[k] << endl;
        k = 0;
    }
}