#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include <numeric>
#include<map>
#include<cstdio>
 
 
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 1e9
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
 
typedef long long int ll;
#define MOD 1000000007
#define MAX_H 110
#define MAX_W 110

int h,w;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
/*左、右、上、下*/
int xs,ys,xg,yg,color;
int mp[MAX_H][MAX_W];
bool ans = false;


void dfs(int y,int x){

    if(y == yg && x == xg){
        /*ゴールについた*/
        ans = true;
        return;
    }
    //今いるところを置き換える
    mp[y][x] = -1;
    //移動方向をループ
    for(int i = 0;i < 4;i++){
        //x方向にdx,ｙ方向にdy移動した場所を(ny,nx)とする
        int nx = x + dx[i], ny = y + dy[i];
        if(1 <= nx && nx <= w && 1 <= ny && ny <= h && mp[ny][nx] == color){/*同じ色なら進める*/
            dfs(ny,nx);
        }
    }
    return;/*全て調べ終わり、1つ深さを戻す*/
}




void solve(){

    for(int i = 1;i <= h;i++){
        for(int j = 1;j <= w;j++){
            if(mp[i][j] == color){
                dfs(i,j);
                if(ans){
                    /*dfsによってゴールに着いた*/
                    return;
                }
            }
        }
    }
}



int main(){

    while(cin >> w >> h,w){
        cin >> xs >> ys >> xg >> yg;

        int c,d,x,y,n;
        cin >> n;

        REP(i,n){

            cin >> c >> d >> x >> y;
            if(d == 0){
                /*横長*/
                for(int j = y;j < y+2;j++){
                    for(int k = x;k < x+4;k++){
                        mp[j][k] = c;
                    }
                }
            }else{
                /*縦長*/
                for(int j = y;j < y+4;j++){
                    for(int k = x;k < x+2;k++){
                        mp[j][k] = c;
                    }
                }
            }
        }

        color = mp[ys][xs];
    
        if(mp[ys][xs] == 0 || mp[yg][xg] == 0){
            ans = false;
        }else{
            /*横方向がx、縦方向がy*/
            dfs(ys,xs);
        }

        if(ans){
            cout << "OK" << endl;
        }else{
            cout << "NG" << endl;
        }
       
        /*初期化*/
        ans = false;
        for(int i = 1;i <= MAX_H;i++){
            for(int j = 1;j <= MAX_W;j++){
                mp[i][j] = 0;
            }
        }
    }
    return 0;
}

