#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 29)
using namespace std;

void warshallFloyd(int alt[100][100], int n){
    range(k,0,n + 1){
        range(i,0,n + 1){
            range(j,0,n + 1){
                alt[i][j] = min(alt[i][j], alt[i][k] + alt[k][j]);
            }
        }
    }
}

int main(){
    int a, b, c, d;
    int n, m;
    int atl[100][100];
    rep(i,100) rep(j,100) atl[i][j] = INF;
    cin >> n >> m;
    rep(i,m){
        scanf("%d%*c%d%*c%d%*c%d", &a, &b, &c, &d);
        atl[a][b] = c;
        atl[b][a] = d;
    }
    warshallFloyd(atl, n);
    scanf("%d%*c%d%*c%d%*c%d", &a, &b, &c, &d);
    cout << c - atl[a][b] - atl[b][a] - d << endl;
}