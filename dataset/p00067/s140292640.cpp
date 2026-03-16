#include <iostream>
#include <string>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

string island[12];
void dfs(int y, int x) {
    island[y][x] = '0';
    rep(k, 4) {
        int ny = y + dy[k];
        int nx = x + dx[k];
        if (!(0 <= ny && ny < 12)) continue;
        if (!(0 <= nx && nx < 12)) continue;
        if (island[ny][nx] == '1') dfs(ny, nx);
    }
}
int main() {
    while (1) {
        rep(i, 12) cin >> island[i];

        int ans = 0;
        rep(i, 12) rep(j, 12) {
            if (island[i][j] == '1') {
                ans++;
                dfs(i, j);
            }
        }
        cout << ans << endl;

        string tmp;
        cin.ignore();
        if (!(getline(cin, tmp))) {
            break;
        }
    }
    return 0;
}