#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool dfs(int y, int x, int c, int gy, int gx, vector<vector<int> > &field){
    if(field[y][x] != c) return false;
    if(y==gy && x==gx) return true;
    field[y][x] = 0;
    for(int i=0; i<4; i++){
        if(dfs(y+dy[i], x+dx[i], c, gy, gx, field)) return true;
    }
    return false;
}

int main(){
    while(1){
        int w,h;
        cin >> w >> h;
        if(w==0) break;

        int sx,sy, gx,gy, n;
        cin >> sx >> sy >> gx >> gy >> n;
        vector<vector<int> > b(h+2, vector<int>(w+2, 0));
        for(int i=0; i<n; i++){
            int c,d,x,y;
            cin >> c >> d >> x >> y;
            for(int r=0; r<2; r++){
                b[y][x] = b[y+1][x] = b[y][x+1] = b[y+1][x+1] = c;
                if(d == 0){
                    x += 2;
                }else{
                    y += 2;
                }
            }
        }

        if(b[sy][sx] == 0 || !dfs(sy, sx, b[sy][sx], gy, gx, b)){
            cout << "NG" << endl;
        }else{
            cout << "OK" << endl;
        }
    }
    return 0;
}
