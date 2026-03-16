#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fr first
#define sc second
typedef pair<int,int> pii;
typedef vector<int> vi;
const int INF = (1<<25);
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

#define MAX_V 20 //最大頂点数

struct edge{
  int to,cost;
  edge(int _to,int _cost){to=_to;cost=_cost;}
};

int V; //頂点数
vector <edge> G[MAX_V];
int d[MAX_V]; //頂点sからの最短距離

void dij(int s){
  priority_queue<pii,vector<pii>,greater<pii> > q;
  fill(d,d+V,INF);
  d[s]=0;
  q.push(pii(0,s));

  while(!q.empty()){
    pii p=q.top(); q.pop();
    int v=p.second; //secondは頂点の番号
    if(d[v]<p.first) continue; //firstは最短距離
    for(int i=0;i<G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]>d[v]+e.cost){
	d[e.to]=d[v]+e.cost;
	q.push(pii(d[e.to],e.to));
      }
    }
  }
}

int main(){
  int m; //道の総数
  cin>> V>> m;
  for(int i=0;i<m;i++){
    int a1,b1,c1,d1;
    scanf("%d,%d,%d,%d",&a1,&b1,&c1,&d1);
    G[a1-1].pb(edge(b1-1,c1));
    G[b1-1].pb(edge(a1-1,d1));
  }
  int x1,x2,y1,y2;
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  dij(x1-1);
  int go=d[x2-1];
  dij(x2-1);
  int back=d[x1-1];
  int ans=y1-go-back-y2;
  cout<< ans<< endl;
}