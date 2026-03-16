#include <iostream>

using namespace std;

string inp[8];
const int W = 8;
const int H = 8;
int sx, sy;
const int dx[] = {0, 0, 0, 1, 2, 3, 0, 0, 0, -1, -2, -3};
const int dy[] = {-1, -2, -3, 0, 0, 0, 1, 2, 3, 0, 0, 0};

void dfs(int x, int y) {
    inp[y][x] = '0';

    for (int i = 0; i < 12; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= W || ny >= H)
            continue;
        
        if (inp[ny][nx] == '1')
            dfs(nx, ny);
    }
}

int main()
{
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < H; j++)
            cin >> inp[j];
        cin >> sx >> sy;
        dfs(sx - 1, sy - 1);
        
        cout << "Data " << i << ":" << endl;
        for (int j = 0; j < H; j++)
            cout << inp[j] << endl;
    }
    
    return 0;
}