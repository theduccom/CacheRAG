#include<iostream>
#include<cstdio>
#include<queue>
#include<map>
using namespace std;
typedef pair< int , int > P;
#define INF (1<<30)
int main(){
  int n,m;
  int a,b,c,d;
  int cost[21][21];
  int min_cost[21];
  cin >> n;
  cin >> m;
  for(int i=0;i<21;i++){
    for(int j=0;j<21;j++){
      cost[i][j]=INF;
    }
    min_cost[i]=INF;
  }
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    cost[a][b] = c;
    cost[b][a] = d;
  }
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  queue<P> que;
  que.push(P(0,a));
  min_cost[a]=0;
  while(!que.empty()){
    P p;
    p = que.front();
    que.pop();
    int v = p.second;
    for(int i=1;i<=n;i++){
      if(cost[v][i] != INF){
	if(min_cost[i] > cost[v][i] + p.first){
	  min_cost[i] = cost[v][i] + p.first;
	  que.push(P(cost[v][i] + p.first,i));
	}
      }
    }
  }
  c -= min_cost[b];
  for(int i=0;i<21;i++){
    min_cost[i] = INF;
  }
  que.push(P(0,b));
  min_cost[b]=0;
  while(!que.empty()){
    P p;
    p = que.front();
    que.pop();
    int v = p.second;
    for(int i=1;i<=n;i++){
      if(cost[v][i] != INF){
	if(min_cost[i] > cost[v][i] + p.first){
	  min_cost[i] = cost[v][i] + p.first;
	  que.push(P(cost[v][i] + p.first,i));
	}
      }
    }
  }
  cout << c - min_cost[a] - d << endl;
}