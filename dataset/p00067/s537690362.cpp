#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int dy[]={1,-1,0,0};
int dx[]={0,0,1,-1};
string table[12];

void dfs(int y, int x){
    table[y][x] = '0';
    rep(i,4){
        int px = x + dx[i];
        int py = y + dy[i];
        if (px < 0 || px >= 12 || py < 0 || py >= 12) continue;
        if (table[py][px] == '0') continue;
        dfs(py, px);
    }
}
int main(){
    while(1){
        int cnt = 0;
        rep(i,12){
            cin >> table[i];
            if (cin.eof()) { return 0; }
        }
        rep(i,12){
            rep(j,12){
                if(table[i][j] == '0') continue;
                dfs(i,j);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

