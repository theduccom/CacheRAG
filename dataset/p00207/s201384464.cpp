#include<bits/stdc++.h>
using namespace std;

typedef long long lint;
typedef long double ldouble;
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())

const int IINF = 1e9 + 10;
const lint LLINF = 1e18;
const lint MOD = 1e9 + 7;
const lint inv = MOD - 2;

vector< vector<int> > b;
int xs, ys, xg, yg;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

bool dfs(int y, int x, int color){
    if(y == yg && x == xg){
        return true;
    }
    b[y][x] = -2;
    bool res = false;
    rep(i, 4){
        int ny = y + dy[i], nx = x + dx[i];
        if(b[ny][nx] == color){
            res = res || dfs(ny, nx, color);
        }
    }
    return res;
}

int main(){
    while(true){
        int w, h;
        cin >> w >> h;
        if(w == 0 && h == 0){
            break;
        }
        b.resize(h+2);
        rep(i, h+2){
            b[i].resize(w+2);
        }
        rep(i, h+2){
            rep(j, w+2){
                b[i][j] = -2;
            }
        }
        cin >> xs >> ys >> xg >> yg;
        int n;
        cin >> n;
        rep(k, n){
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            if(d == 0){
                REP(i, y, y+2){
                    REP(j, x, x+4){
                        b[i][j] = c;
                    }
                }
            }else{
                REP(i, y, y+4){
                    REP(j, x, x+2){
                        b[i][j] = c;
                    }
                }
            }
        }
        b[ys][xs] = max(b[ys][xs], -1);
        if(dfs(ys, xs, b[ys][xs])){
            cout << "OK" << endl;
        }else{
            cout << "NG" << endl;
        }
    }
    return 0;
}
