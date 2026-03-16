#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int w, h, xs, ys, xg, yg, n, c, d, x, y, b[101][101];
int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};

bool dfs(int x, int y){
    int nx, ny;
    b[x][y] = 0;
    if(x == xg && y == yg) return true;
    bool r = 0;
    rep(i, 4){
        nx = x + dx[i]; ny = y + dy[i];
        if(nx > 0 && nx <= h && ny > 0 && ny <= w && b[nx][ny]==c)r=r||dfs(nx, ny);
    }
    return r;
}

int main(){
    while(cin >> w >> h, w||h){
        memset(b, 0, sizeof(b));
        cin >> ys >> xs >> yg >> xg >> n;
        rep(i,n){
            int c, d, x, y;
            cin >> c >> d >> y >> x;
            rep(j, (d?4:2)) rep(k, (d?2:4)) b[x + j][y + k] = c;
        }
        c = b[xs][ys];

        if(c > 0 && dfs(xs, ys)) cout << "OK" << endl;
        else cout << "NG" << endl;
    }
}