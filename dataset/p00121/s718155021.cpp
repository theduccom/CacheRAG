//
// Created by yijiezhu on 12/21/16.
//
#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

const string origin = "01234567";
int delta[] {-1, 1, -4, 4};
map<string, int> dp;

void bfs() {
    queue<string> que;
    que.push(origin);
    dp.insert(make_pair(origin, 0));

    while (!que.empty()) {
        string v = que.front(); que.pop();
        int z(0);
        for (int i = 1; i < 8; i++) {
            if (v[i] == '0') z = i;
        }
        for (int q = 0; q < 4; q++) {
            if (z == 4 && delta[q] == -1) continue;
            if (z == 3 && delta[q] == 1) continue;
            int nz = z + delta[q];
            if (nz < 0 || nz >= 8) continue;
            string nk = v;
            swap(nk[z], nk[nz]);
            if (dp.find(nk) == dp.end()) {
                que.push(nk);
                dp[nk] = dp[v] + 1;
            }
        }
    }
}

int main() {
    bfs();
    string s;
    while (getline(cin, s)) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        cout << dp[s] << endl;
    }
}