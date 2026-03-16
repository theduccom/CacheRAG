#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int ans;

void solve(char a[][15], int x, int y){
    a[x][y] = '0';
    if(a[x + 1][y] == '1')
        solve(a, x + 1, y);
    if(a[x - 1][y] == '1')
        solve(a, x - 1, y);
    if(a[x][y + 1] == '1')
        solve(a, x, y + 1);
    if(a[x][y - 1] == '1')
        solve(a, x, y - 1);

}

int main(){
    string inp;
    char map[15][15] = {0};
    while(scanf("%s",map[0]) == 1){
        ans = 0;
        range(i, 1, 12){
            scanf("%s", map[i]);
        }
        rep(i, 12){
            rep(j, 12){
                if(map[i][j] == '1'){
                        ans++;
                        solve(map, i, j);
                }
            }
        }
        cout << ans << endl;
    }
}