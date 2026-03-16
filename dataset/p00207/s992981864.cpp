#include <iostream>
#include <cstdio>

using namespace std;

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

bool flg[150][150];
int fld[150][150];
int w,h;
int xg,yg;
bool ans;

void check(int c,int x,int y){
    if(fld[y][x]!=c){
        return;
    }

    if(x == xg && y == yg){
        ans = true;
        return;
    }

    if(flg[y][x]){
        return;
    }
    flg[y][x] = true;

    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    rep(i,4){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<=0 || nx>w || ny<=0 || ny>h){
            continue;
        }
        check(c,nx,ny);
    }
}

int main(){
    while(cin >> w >> h,w+h){
        rep(i,150){rep(k,150){flg[i][k]=false;}}
        ans = false;
        int xs,ys;
        cin >> xs >> ys;
        cin >> xg >> yg;

        int n;
        cin >> n;
        rep(i,n){
            int c,d,x,y;
            cin >> c >> d >> x >> y;
            int width,height;
            if(d == 0){
                width = 4;
                height = 2;
            }else{
                width = 2;
                height = 4;
            }

            reep(ny,y,y+height){
                reep(nx,x,x+width){
                    fld[ny][nx] = c;
                }
            }
        }

        reep(i,1,6){
            check(i,xs,ys);
        }
        if(ans){
            puts("OK");
        }else{
            puts("NG");
        }
    }
}