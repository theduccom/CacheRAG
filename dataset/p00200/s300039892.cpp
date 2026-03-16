#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int > P;
const int INF = 1 << 30;
int Dijkstra(int s,int g,int r);

int m,n;

int min_cost[2][111];

typedef struct{
  vector<int>edge_to;
  vector<int>edge_cost[2];
}Node_data;

Node_data Graph[111];

priority_queue<P ,vector< P >, greater< P > >que;

int main(){
  int a,b,c,d,k;
  int s,g,r;
  while(1){
    for(int i = 0;i < 111;i++){
      Graph[i].edge_to.clear();
      Graph[i].edge_cost[0].clear();
      Graph[i].edge_cost[1].clear();
    }
    cin >> m >> n;
    if(m == 0 && n == 0)break;
    for(int i = 0;i < m;i++){
      scanf("%d %d %d %d",&a,&b,&c,&d);
      Graph[a - 1].edge_to.push_back(b - 1);
      Graph[a - 1].edge_cost[0].push_back(c);
      Graph[a - 1].edge_cost[1].push_back(d);
      Graph[b - 1].edge_to.push_back(a - 1);
      Graph[b - 1].edge_cost[0].push_back(c);
      Graph[b - 1].edge_cost[1].push_back(d);
    }
    cin >> k;
    for(int i = 0;i < k;i++){

      cin >> s >> g >> r;
      
      for(int j = 0;j < n;j++){
	min_cost[r][j] = INF;
      }
      cout << Dijkstra(s - 1,g - 1,r) << endl;
    }
  }
  return(0);
}

int Dijkstra(int s,int g,int r){
  int node,cost;
  int newnode,newcost;
  min_cost[r][s] = 0;
  P a;
  a.first = 0;
  a.second = s;
  que.push(a);
  while(!que.empty()){
    node = que.top().second;
    cost = que.top().first;
    que.pop();
    // if(node == g)return cost;
    if(cost > min_cost[r][node])continue;
    for(int i = 0;i < Graph[node].edge_to.size();i++){
      newnode = Graph[node].edge_to[i];
      newcost = cost + Graph[node].edge_cost[r][i];
      if(min_cost[r][newnode] > newcost){
	min_cost[r][newnode] = newcost;
	a.first = newcost;
	a.second = newnode;
	que.push(a);
      }
    }
  }
  return min_cost[r][g];
}