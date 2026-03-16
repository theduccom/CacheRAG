#include <iostream>
using namespace std;
#define MAX 100
 
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
 
int w, h, xs, ys, xg, yg, G[MAX+2][MAX+2];
 
bool dfs(int x, int y, int color){
    if(color == 0 || G[x][y] != color) return false;
    if(x==xg&&y==yg) return true;
    G[x][y] = 0;
    for(int r=0; r<4; r++){
        if(dfs(x+dx[r], y+dy[r], color)) return true;
    }
    return false;
}
 
int main(void)
{
    int n, c, d, bx, by;
    while(cin>>w>>h, w&&h){
        for(int x=0; x<w+2; x++){
            for(int y=0; y<h+2; y++){
                G[x][y] = 0;
            }
        }
        cin >> xs >> ys >> xg >> yg >> n;
        for(int i=0; i<n; i++){
            cin >> c >> d >> bx >> by;
            for(int i=0; i<4; i++){
                for(int j=0; j<2; j++){
                    if(d==0) G[bx+i][by+j] = c; 
                    else G[bx+j][by+i] = c;
                }
            }
        }
        if(dfs(xs, ys, G[xs][ys])) cout << "OK" << endl;
        else cout << "NG" << endl;
    }
    return 0;
}
