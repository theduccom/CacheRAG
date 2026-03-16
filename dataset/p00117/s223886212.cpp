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
vector<edge> G[MAX_V];
int d[MAX_V];

int dijkstra(int s,int V){
    priority_queue< pii,vector<pii>,greater<pii> > que;
    rep(i,MAX_V)d[i]=INF;
    d[s]=0;
    que.push(pii(0,s));
    
    while(que.size()){
        pii p=que.top();
        que.pop();
        
        int v=p.second;
        if(d[v]<p.first)continue;
        
        rep(i,G[v].size()){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(pii(d[e.to],e.to));
            }
        }
    }
    return d[V];
}


int main(){
    int n,m;
    cin>>n>>m;
    rep(i,m){
        int a,b,c,d;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        a--,b--;
        G[a].pb(edge{b,c});
        G[b].pb(edge{a,d});
    }
    int x1,x2,y1,y2;
    char ch;
    cin>>x1>>ch>>x2>>ch>>y1>>ch>>y2;
    x1--,x2--;
    cout<<y1-(dijkstra(x1,x2)+dijkstra(x2,x1)+y2)<<endl;
}