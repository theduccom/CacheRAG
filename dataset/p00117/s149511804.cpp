#include <iostream>
#include <vector>
#include <queue>
#define INF 100000000

using namespace std;
struct edge { int to, cost; };
typedef pair<int, int> P;
int n, m;
int x1, x2, y1, y2;
vector<edge> G[20];
int dijkstra(int, int);
main(){
  while(cin >> n){
    cin >> m;
    for(int i=0;i<m;i++){
      int a, b, c, d;
      scanf("%d,%d,%d,%d", &a, &b, &c, &d);
      edge tmp;
      tmp.to=b-1;
      tmp.cost=c;
      G[a-1].push_back(tmp);
      tmp.to=a-1;
      tmp.cost=d;
      G[b-1].push_back(tmp);
    }
    scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
    x1--;
    x2--;
    cout << y1-dijkstra(x1, x2)-dijkstra(x2, x1)-y2 << endl;
  }
  return 0;
}

int dijkstra(int s, int g){
  int d[20];
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d, d+n, INF);
  d[s]=0;
  que.push(P(0, s));
  while(!que.empty()){
    P p=que.top(); que.pop();
    int v=p.second;
    if(d[v]<p.first) continue;
    for(int i=0;i<G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]>d[v]+e.cost){
	d[e.to]=d[v]+e.cost;
	que.push(P(d[e.to], e.to));
      }
    }
  }
  return d[g];
}