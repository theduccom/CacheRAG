#include<iostream>
#include<vector>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;
struct edge{
  int to,cost;
};
int d[100];
vector<vector<struct edge> >E(100);
void dijkstra(int s){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >que;
  for(int i=0;i<100;i++)
    d[i]=1000000000;
  d[s] = 0;
  que.push(pair<int,int>(0,s));
  while(!que.empty()){
    pair<int,int> p=que.top();que.pop();
    int v = p.second;
    if(d[v]<p.first)continue;
    for(int j=0;j<E[v].size();j++){
      edge t = E[v][j];
      if(d[t.to]>d[v]+t.cost){
	d[t.to]=d[v]+t.cost;
	que.push(pair<int,int>(d[t.to],t.to));
      }
    }
  }
}

int main(){
  int n,m;cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b,c,d;scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    struct edge A,B;
    A.to=b;A.cost=c;B.to=a;B.cost=d;
    E[a].push_back(A);E[b].push_back(B);
  }
  int s,g,V,P;
  scanf("%d,%d,%d,%d",&s,&g,&V,&P);
  int ans=V-P;
  dijkstra(s);
  ans-=d[g];
  //cout<<d[g]<<endl;
  dijkstra(g);
  ans-=d[s];
  // cout<<d[s]<<endl;
  cout<<ans<<endl;
  return 0;
}