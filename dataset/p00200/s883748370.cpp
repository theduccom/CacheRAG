#include <bits/stdc++.h> // only for GCC

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ull i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)
#define riter(i,c) for(auto i=(c).rbegin(); i!=(c).rend(); ++i)
#define MAX_V 100
const double eps = 1e-10;
const double pi  = acos(-1.0);
const double INF = (int)1e8;

int cost[MAX_V][MAX_V]; int d[MAX_V];
int t[MAX_V][MAX_V];
bool used[MAX_V];
int V;
// cost[u][v]は辺e=(u,v)のコスト(存在しない場合はINF) // 頂点sからの最短距離
// すて&#12441;に使われたかのフラク&#12441;
// 頂点数
// 始点sから各頂点への最短距離を求める
void dijkstra(int s) {
    fill(d, d + V, INF);
    fill(used, used + V, false);
    d[s] = 0;
    while(true) {
        int v = -1;
        // また&#12441;使われていない頂点のうち距離か&#12441;最小のものを探す
        for (int u = 0; u < V; u++) {
            if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
        }
        if (v == -1) break;
        used[v] = true;
        for (int u = 0; u < V; u++) {
            d[u] = min(d[u], d[v] + cost[v][u]);
            //cout << d[u] << endl;
        }
    }
}
void dijkstra2(int s) {
    fill(d, d + V, INF);
    fill(used, used + V, false);
    d[s] = 0;
    while(true) {
        int v = -1;
        // また&#12441;使われていない頂点のうち距離か&#12441;最小のものを探す
        for (int u = 0; u < V; u++) {
            if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
        }
        if (v == -1) break;
        used[v] = true;
        for (int u = 0; u < V; u++) {
            d[u] = min(d[u], d[v] + t[v][u]);
        }
    }
}

int main(){
    int n,m;
    int a,b;
    int x;
    bool w;
    while(cin >> n >> m && n|m){
    	rep(i,m)rep(j,m){
    		cost[i][j]=INF;
    		t[i][j]=INF;
    	}
    	V=m;
        rep(i,n){
            cin >> a >> b;
            a--;b--;
            cin >> cost[a][b] >> t[a][b];
            cost[b][a]=cost[a][b];
            t[b][a]=t[a][b];
        }
        cin >> x;
        rep(i,x){
            cin >> a >> b >> w;
            a--;b--;
            if(!w){
                dijkstra(a);
                cout << d[b] << endl;
            }else{
                dijkstra2(a);
                cout << d[b] << endl;
            }
        }
    }
}