#include <bits/stdc++.h>

using namespace std;

typedef vector<int> Vec;
typedef vector<Vec> Mat;

void dfs(int y, int x, Mat &a)
{
    if (a[y][x] == 0) return;
    a[y][x] = 0;

    const int dx[] = {-1, 0, 1, 0};
    const int dy[] = {0, -1, 0, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (a[ny][nx] == 1) {
            dfs(ny, nx, a);
        }
    }
}

int main()
{
    string s;
    while (cin >> s) {
        Mat a(14, Vec(14, 0));
        for (int i = 1; i < 13; i++) {
            a[1][i] = (s[i-1] - '0');
        }
            
        for (int i = 0; i < 11; i++) {
            cin >> s;
            for (int j = 1; j < 13; j++) {
                a[i+2][j] = (s[j-1] - '0');
            }
        }
        
        int cnt = 0;
        for (int i = 1; i < 13; i++) {
            for (int j = 1; j < 13; j++) {
                if (a[i][j] == 1) {
                    cnt++;
                    dfs(i, j, a);
                }
            }
        }
        cout << cnt << endl;
    }        
    return 0;
}