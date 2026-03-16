#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

typedef pair<int, int> P;
#define rep(i,a) for(int i=0;i<(a);++i)
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl;

const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
int w,h,sx,sy,gx,gy,n;
int board[102][102];

int main()
{
    while(cin >> w >> h && w) {
        memset(board, 0, sizeof(board));
        cin >> sx >> sy >> gx >> gy >> n;
        
        int c, d, x, y;
        rep(k, n) {
            cin >> c >> d >> x >> y;
            if(d == 0)
                rep(i, 2) rep(j, 4) 
                    board[i + y][j + x] = c;
             else 
                rep(i, 4) rep(j, 2) 
                    board[i + y][j + x] = c;
        }

        int e = board[sy][sx];
        queue<P> que;
        que.push(P(sx, sy));
        bool ok = false;
        while(!que.empty()) {
            P p = que.front(); que.pop();
            x = p.first; y = p.second;
            if(x == gx && y == gy) {
                ok = true;
                break;
            }
            if(board[y][x] != e) 
                continue;

            board[y][x] = -1;
            for(int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(nx >= 1 && nx <= w && ny >= 0 && ny <= h && board[ny][nx] == e) 
                    que.push(P(nx, ny));
            }
        }

        cout << ((ok) ? "OK" : "NG") << endl;
    }
}