#include<bits/stdc++.h>
using namespace std;
#define INF 1<<29
int V;
vector<vector<vector<int> > > G;
int d[101];
bool used[101];

void dijkstra(int s,int r){
  memset(used,false,sizeof(used));
  fill(d,d+101,INF);
  d[s]=0;
  while(1){
    int id=-1;
    for(int i=1;i<=V;++i)
      if(!used[i] && (id==-1||d[id]>d[i]))
        id=i;
    if(id==-1) break;
    used[id]=true;
    for(int i=1;i<=V;++i)
      if(r)
        d[i]=min(d[i],d[id]+G[id][i][1]);
      else
        d[i]=min(d[i],d[id]+G[id][i][0]);
  }
}
int main(){
  int n;
  while(cin>>n>>V,n){
    G=vector<vector<vector<int> > >(V+1,vector<vector<int> >(V+1,vector<int>(2,INF)));
    for(int i=0;i<n;++i){
      int a,b,c,t; cin>>a>>b>>c>>t;
      G[a][b][0]=G[b][a][0]=c;
      G[a][b][1]=G[b][a][1]=t;
    }
    int k; cin>>k;
    for(int i=0;i<k;++i){
      int p,q,r; cin>>p>>q>>r;
      dijkstra(p,r);
      cout<<d[q]<<endl;
    }
    
  }
  
  return 0;
}