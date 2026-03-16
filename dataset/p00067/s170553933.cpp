#include <bits/stdc++.h>
using namespace std;
vector<string> table(12);
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

void dfs(int x, int y)
{
    table[y][x] = '0';
    for (int i = 0; i < 4; i++) {
        int px = x + dx[i];
        int py = y + dy[i];
        if (px < 0 || px >= 12 || py < 0 || py >= 12) continue;
        if (table[py][px] == '0') continue;
        dfs(px, py);
    }
}

int main()
{
    while (1) {
        int ans = 0;
        for (int i = 0; i < 12; i++) {
            cin >> table[i];
            if (cin.eof()) { return 0; }
        }
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                if (table[i][j] == '0') continue;
                dfs(j, i);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
