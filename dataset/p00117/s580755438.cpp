#include "bits/stdc++.h"
using namespace std;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999
int n,m;
int d[30];
vector<pii> G[500];

#define TO first
#define COST second
void dijkstra(int s){
    rep(i,30)d[i]=INF;
    priority_queue<pii,vector<pii>,greater<pii>> que;
    que.push(pii(0,s));
    d[s]=0;
    
    while(que.size()){
        pii q=que.top();
        que.pop();
        
        int v=q.second;
        if(d[v]<q.first)continue;
        
        rep(i,G[v].size()){
            pii e=G[v][i];
            if(d[e.TO]>d[v]+e.COST){
                d[e.TO]=d[v]+e.COST;
                que.push(pii(d[e.TO],e.TO));
            }
        }
    }
}

int main(){
    int n,m;
    char ch;
    cin>>n>>m;
    rep(i,m){
        int a,b,c,f;
        cin>>a>>ch>>b>>ch>>c>>ch>>f;
        G[a].pb(pii(b,c));
        G[b].pb(pii(a,f));
    }
    int a,b,c,f;
    cin>>a>>ch>>b>>ch>>c>>ch>>f;
    int s=0;
    dijkstra(a);
    s+=d[b];
    dijkstra(b);
    s+=d[a];
    cout<<c-f-s<<endl;
}