#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;

#define NONE INT_MAX

int n,m,a,b,c,d,x1,x2,y1,y2;
vector< vector<int> >M;

int Dijkstra(int start,int goal)
{
  vector<int>d(n,NONE),visited(n,0);
  multimap<int,int>q;

  d[start]=0;
  q.insert(make_pair(0,start));

  while(q.size()){
    int u,v;
    u=q.begin()->second;
    q.erase(q.begin());
    if(visited[u]==true)continue;
    visited[u]=true;
    for(v=0;v<n;v++){
      if(M[u][v]==NONE)continue;
      if(visited[v]==true)continue;
      if(d[v]<=d[u]+M[u][v])continue;
      d[v]=d[u]+M[u][v];
      q.insert(make_pair(d[v],v));
    }
  }
  return d[goal];
}

int main()
{
  cin>>n>>m;
  M.resize(n);
  for(int i=0;i<n;i++)M[i].resize(n,NONE);
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    a--;b--;
    M[a][b]=c;
    M[b][a]=d;
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  x1--;x2--;
  cout<<(y1-y2-Dijkstra(x1,x2)-Dijkstra(x2,x1))<<endl;
}