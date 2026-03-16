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

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

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

  d=-1;

  vector<Node> n1;
  n1.reserve(n+1);
  n1.assign(graph.begin(),graph.end());

  n1[x1].cost=0;

  while(1){
    d=-1;

    for(int i=1;i<=n;i++){
      if( n1[i].done || n1[i].cost < 0 ) continue;
      if( d==-1 || n1[i].cost < n1[d].cost ) d=i;
    }

    if(d==-1) break;
    n1[d].done=true;

    for(int i=0; i< n1[d].edge_to.size(); i++){
      int to = n1[d].edge_to[i];
      int cost = n1[d].cost + n1[d].edge_cost[i];
      if(n1[to].cost < 0 || cost < n1[to].cost)
	n1[to].cost = cost;
    }
  }

  graph[x2].cost=0;

  while(1){
    d=-1;

    for(int i=1;i<=n;i++){
      if( graph[i].done || graph[i].cost < 0 ) continue;
      if( d==-1 || graph[i].cost < graph[d].cost ) d=i;
    }

    if(d==-1) break;
    graph[d].done=true;

    for(int i=0; i< graph[d].edge_to.size(); i++){
      int to = graph[d].edge_to[i];
      int cost = graph[d].cost + graph[d].edge_cost[i];
      if(graph[to].cost < 0 || cost < graph[to].cost)
	graph[to].cost = cost;
    }
  }

  cout<<y1-y2-graph[x1].cost-n1[x2].cost<<endl;

}