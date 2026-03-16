#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 29)
using namespace std;

struct Data{
    int c, t;
};

void warshallFloyd(Data d[105][105], int m){
    range(k,1,m + 1){
        range(i,1,m + 1){
            range(j,1,m + 1){
                d[i][j].c = min(d[i][j].c, d[i][k].c + d[k][j].c);
                d[i][j].t = min(d[i][j].t, d[i][k].t + d[k][j].t);
            }
        }
    }
}

int main(){
    int n, m;
    Data d[105][105];

    while(cin >> n >> m, n||m){
        rep(i,105) rep(j,105) d[i][j].t = d[i][j].c = INF;
        rep(i,n){
            int a, b, e, f;
            cin >> a >> b >> e >> f;
            d[a][b].c = d[b][a].c = e;
            d[a][b].t = d[b][a].t = f;
        }

        warshallFloyd(d, m);

        int k;
        cin >> k;
        rep(i,k){
            int a, b, c;
            cin >> a >> b >> c;
            if(c) cout << d[a][b].t << endl;
            else cout << d[a][b].c << endl;
        }
    }
}