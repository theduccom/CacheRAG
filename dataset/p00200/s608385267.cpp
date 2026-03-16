#include<bits/stdc++.h>
using namespace std;
typedef struct E{
  int to,cost,tim;
}edge;
vector<vector<edge> >root(310);
int d[2][301];
void dijkstraco(int s){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >que;
  d[0][s] = 0;
  que.push(pair<int,int>(0,s));
  while(!que.empty()){
    pair<int,int> p=que.top();que.pop();
    int v = p.second;
    if(d[0][v]<p.first)continue;
    for(int j=0;j<root[v].size();j++){
      edge t = root[v][j];
      if(d[0][t.to]>d[0][v]+t.cost){
	d[0][t.to]=d[0][v]+t.cost;
	que.push(pair<int,int>(d[0][t.to],t.to));
      }
    }
  }
}
void dijkstrati(int s){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >que;
  d[1][s] = 0;
  que.push(pair<int,int>(0,s));
  while(!que.empty()){
    pair<int,int> p=que.top();que.pop();
    int v = p.second;
    if(d[1][v]<p.first)continue;
    for(int j=0;j<root[v].size();j++){
      edge t = root[v][j];
      if(d[1][t.to]>d[1][v]+t.tim){
	d[1][t.to]=d[1][v]+t.tim;
	que.push(pair<int,int>(d[1][t.to],t.to));
      }
    }
  }
}
int main(){
  int n,m;
  while(cin>>n>>m,n+m!=0){
    for(int j=0;j<2;j++){
      for(int a=0;a<301;a++)
	d[j][a]=1000000000;
    }
    for(int i=0;i<301;i++)
      root[i].clear();
    for(int i=0;i<n;i++){
      int f;cin>>f;
      edge e;cin>>e.to>>e.cost>>e.tim;
      root[f].push_back(e);
      int tmp=f;
      f=e.to;
      e.to=tmp;
      root[f].push_back(e);
    }
    int k;cin>>k;
    for(int i=0;i<k;i++){
      int p,q,r;cin>>p>>q>>r;
      if(r==0)
	dijkstraco(p);
      else
	dijkstrati(p);
      cout<<d[r][q]<<endl;
    for(int j=0;j<2;j++){
      for(int a=0;a<301;a++)
	d[j][a]=1000000000;
    }
    }
  }
  return 0;
}