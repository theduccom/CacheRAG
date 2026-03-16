#include <iostream>

using namespace std;

int map[101][101];
int xg, yg;
int w, h;
int col;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
bool flag;

void dfs(int x, int y)
{
    map[y][x] = 0;

    if (x == xg && y == yg) {
        flag = true;
        return ;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= w || ny >= h)
            continue;
        else if (map[ny][nx] == col)
            dfs(nx, ny);
    }
}

void setblock(int c, int d, int bx, int by)
{
    int wlim = 4, hlim = 2;

    if (d == 1) {
        wlim = 2;
        hlim = 4;
    }

    for (int y = 0; y < hlim; y++)
        for (int x = 0; x < wlim; x++)
            map[by + y][bx + x] = c;
}


int main()
{
    while (cin >> w >> h, w || h) {
        int xs, ys;
        int n;

        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                map[y][x] = 0;

        cin >> xs >> ys >> xg >> yg >> n;

        xs--, ys--, xg--, yg--;
        for (int i = 0; i < n; i++) {
            int c, d, x, y;
            
            cin >> c >> d >> x >> y;
            x--, y--;            
            setblock(c, d, x, y);
        }
        col = map[ys][xs];
        flag = false;
        if (col)
            dfs(xs, ys);

        if (flag)
            cout << "OK" << endl;
        else
            cout << "NG" << endl;
    }

    return 0;
}