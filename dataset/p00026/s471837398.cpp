#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define first first
#define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;


int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};

int h = 10, w = 10;

bool contain(int y, int x){
    return (0 <= y && y < h && 0 <= x && x < w);
}

signed main(){
    int x, y, s;
    char c;
    int d[11][11] = {0};
    while(cin >> x >> c >> y >> c >> s){
        // cout << x << ' ' << y << ' ' << s << endl;
        if(s == 1){
            d[y][x]++;
            rep(i, 0, 4){
                int ny = y + dy[i];
                int nx = x + dx[i];
                if(contain(ny, nx)){
                    d[ny][nx]++;
                }
            }
        }
        if(s >= 2){
            rep(i, 0, 3){
                rep(j, 0, 3){
                    int ny = y + i - 1;
                    int nx = x + j - 1;
                    if(contain(ny, nx)){
                        d[ny][nx]++;
                    }
                }
            }
        }
        if(s == 3){
            rep(i, 0, 4){
                int ny = y + 2 * dy[i];
                int nx = x + 2 * dx[i];
                if(contain(ny, nx)){
                    d[ny][nx]++;
                }
            }
        }
    }
    int ans = 0, MAX = 0;
    rep(i, 0, 10){
        rep(j, 0, 10){
            // o(d[i][j]);
            if(d[i][j] == 0) ans ++;
            MAX = max(MAX, d[i][j]);
        }
    }
    cout << ans << endl;
    cout << MAX << endl;
}