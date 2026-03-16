#include<iostream>
#include<vector>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Node{
  int num;

  vector<int> edge_to;
  vector<int> edge_cost;

  bool done;
  int cost;
};

vector<string> splitAll(string s, string t) {
  vector<string> v;
  for (int p = 0; (p = s.find(t)) != s.npos; ) {
    v.push_back(s.substr(0, p));
    s = s.substr(p + t.size());
  }
  v.push_back(s);
  return v;
}

int dijkstra (vector<Node> g,int start,int goal){
  int d;
  g[start].cost=0;

  while(1){
    d=-1;

    for(int i=1;i<=g.size();i++){
      if( g[i].done || g[i].cost < 0 ) continue;
      if( d==-1 || g[i].cost < g[d].cost ) d=i;
    }

    if(d==-1) break;
    g[d].done=true;

    for(int i=0; i< g[d].edge_to.size(); i++){
      int to = g[d].edge_to[i];
      int cost = g[d].cost + g[d].edge_cost[i];
      if(g[to].cost < 0 || cost < g[to].cost)
	g[to].cost = cost;
    }
  }

  return g[goal].cost;
}


int main(){
  int n,m;
  cin>>n;

  vector<Node> graph;
  graph.reserve(n+1);
  graph.resize(n+1);

  for(int i=1; i<=n; i++){
    graph[i].num=(i+1);
    graph[i].cost=-1;
    graph[i].done=false;
  }

  string s;

  cin>>m;
  getline(cin,s);

  int a,b,c,d;
  vector<string> vv;
  vv.reserve(4);
  vv.resize(4);

  while(m--){
    getline(cin,s);
    vv = splitAll(s,",");

    a = atoi( vv[0].c_str() );
    b = atoi( vv[1].c_str() );
    c = atoi( vv[2].c_str() );
    d = atoi( vv[3].c_str() );

    graph[a].edge_to.push_back(b);
    graph[a].edge_cost.push_back(c);
    graph[b].edge_to.push_back(a);
    graph[b].edge_cost.push_back(d);

  }

  int x1,x2,y1,y2;
  getline(cin,s);
  vv = splitAll(s,",");

  x1 = atoi( vv[0].c_str() );
  x2 = atoi( vv[1].c_str() );
  y1 = atoi( vv[2].c_str() );
  y2 = atoi( vv[3].c_str() );

  vector<Node> copy;
  copy.reserve(n+1);
  copy.assign(graph.begin(),graph.end());

  int rcost = dijkstra(graph,x2,x1);
  int gcost = dijkstra(copy,x1,x2);

  cout<<y1-y2-rcost-gcost<<endl;

}