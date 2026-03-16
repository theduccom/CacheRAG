#include<bits/stdc++.h>
using namespace std;

#define INF 200000
int main(){
  typedef pair<int,int> Edge;
  typedef pair<int,vector<Edge> > Node;
  priority_queue<Node,vector<Node>,greater<Node> >que;
  int n,m;
  int starts,goal,maxm,hasira;
  int a,b,c,d;
  Node node[21];
  cin>>n>>m;
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    node[a].second.push_back(Edge(c,b));
    node[b].second.push_back(Edge(d,a));
  }
  scanf("%d,%d,%d,%d",&starts,&goal,&maxm,&hasira);
  for(int i=1;i<=n;i++){
    node[i].first=INF;
  }
  node[starts].first=0;
  que.push(node[starts]);
  while(!que.empty()){
    Node n=que.top();que.pop();
    for(int i=0;i<n.second.size();i++){
      if(node[n.second[i].second].first>n.first+n.second[i].first){
	node[n.second[i].second].first=n.first+n.second[i].first;
	que.push(node[n.second[i].second]);
      }
    }
  }
  int koutuuhi=node[goal].first;

    for(int i=1;i<=n;i++){
    node[i].first=INF;
  }
  node[goal].first=0;
  que.push(node[goal]);
  while(!que.empty()){
    Node n=que.top();que.pop();
    for(int i=0;i<n.second.size();i++){
      if(node[n.second[i].second].first>n.first+n.second[i].first){
	node[n.second[i].second].first=n.first+n.second[i].first;
	que.push(node[n.second[i].second]);
      }
    }
  }
  koutuuhi+=node[starts].first;
  cout<<maxm-koutuuhi-hasira<<endl;
}