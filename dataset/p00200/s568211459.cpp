#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;

int graph0[111][111];
int graph1[111][111];

int main(){
    int n,m;
    while(cin >> m >> n && n){
        rep(i,n+1)rep(j,n+1) graph0[i][j] = graph1[i][j] = i==j ? 0 : 1e8;
        rep(i,m){
            int a,b, c,d;
            cin >> a >> b >> c >> d;
            graph0[a][b] = graph0[b][a] = c;
            graph1[a][b] = graph1[b][a] = d;
        }
        for(auto & g : {graph0, graph1}){
            rep(k,n+1)rep(i,n+1)rep(j,n+1) g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        }
        int q;
        cin >> q;
        rep(qq,q){
            int a,b,c;
            cin >> a >> b >> c;
            if(c == 0){
                cout << graph0[a][b];
            } else {
                cout << graph1[a][b];
            }
            cout << endl;
        }
    }
}