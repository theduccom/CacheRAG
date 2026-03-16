#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
#define rep(i,n) for(int i = 0 ; i < n ; i++)
 
int main(){
    int mon[100][100];
    int tim[100][100];
    int n,m;
    while(cin >> m >> n && n ){
        rep(i,n)rep(j,n) mon[i][j] = tim[i][j] = 1e9;
        for(int i = 0 ; i < m ; i++){
            int a,b,c,d;
            cin >> a >> b >> c >> d;
            a--,b--;
            mon[a][b] = mon[b][a] = c;
            tim[a][b] = tim[b][a] = d;
        }
        rep(i,n)rep(j,n)rep(k,n){
            mon[j][k] = min(mon[j][k],mon[j][i]+mon[i][k]);
            tim[j][k] = min(tim[j][k],tim[j][i]+tim[i][k]);
        }
        int R;
        cin >> R;
        rep(i,R){
            int a,b,c;
            cin >> a >> b >> c;
            a--,b--;
            if(c) cout << tim[a][b];
            else cout << mon[a][b];
            cout << endl;
        }
    }
}