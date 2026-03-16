#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999
#define MAX_V 100

struct edge{int to,cost;};
vector<edge> G[2][MAX_V];
int d[2][MAX_V];

int dijkstra(int s,int V,int ver){
    priority_queue< pii,vector<pii>,greater<pii> > que;
    rep(i,MAX_V)d[ver][i]=INF;
    d[ver][s]=0;
    que.push(pii(0,s));
    
    while(que.size()){
        pii p=que.top();
        que.pop();
        
        int v=p.second;
        if(d[ver][v]<p.first)continue;
        
        rep(i,G[ver][v].size()){
            edge e=G[ver][v][i];
            if(d[ver][e.to]>d[ver][v]+e.cost){
                d[ver][e.to]=d[ver][v]+e.cost;
                que.push(pii(d[ver][e.to],e.to));
            }
        }
    }
    return d[ver][V];
}




int main(){
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        rep(i,2)rep(j,MAX_V)G[i][j].clear();
        rep(i,n){
            int a,b,cost,time;
            cin>>a>>b>>cost>>time;
            a--,b--;
            G[0][a].pb(edge{b,cost});
            G[0][b].pb(edge{a,cost});
            G[1][a].pb(edge{b,time});
            G[1][b].pb(edge{a,time});
        }
        int k;
        cin>>k;
        rep(i,k){
            int p,q,r;
            cin>>p>>q>>r;
            p--,q--;
            cout<<dijkstra(p,q,r)<<endl;
        }
    }
}