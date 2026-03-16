#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
const int INF = 1e8;
using namespace std;

const int N = 25;
int g[N][N];

int bfs(int n, int s, int G){
    int dis[N]; //?????¢
    queue<int> q; //?¨??????????????????\??????
    rep(i,N) dis[i] = INF;

    dis[s] = 0;
    q.push(s);

    int u;
    while(!q.empty()){
        u = q.front(); q.pop();
        rep(v,n){
            if(dis[v] > dis[u] + g[u][v]){
                dis[v] = dis[u] + g[u][v]; //??°???????????±??? 
                q.push(v);
            }
        }
    }
    return dis[G];
}

int main(){
    int n,m;
    cin >> n >> m;

    rep(i,N) rep(j,N) g[i][j] = INF;
    char k;
    rep(i,m){
        int a, b, c, d;
        cin >> a >>k>> b>>k >> c>>k >> d;
        a--; b--;
        g[a][b] = c;
        g[b][a] = d;
    }

    int s, g, v, p;
    cin >> s >>k>> g >> k>>v >>k>> p;
    s--; g--;

    int a = bfs(n,s,g);
    int b = bfs(n,g,s);
    cout << v - p - a - b << endl;

}