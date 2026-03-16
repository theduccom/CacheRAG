#include <iostream>
#include <cstdio>
#include <queue>
#include <map>
#include <array>

using namespace std;

struct Edge{
  int to;
  int cost;
};

typedef pair<int, int> P; // min distance, vertex id

const int kMaxVertex = 21;
const int kInf = 1 << 30;
vector<Edge> G[kMaxVertex];
int d[kMaxVertex];

void Dijkstra(int start, int num_vertex){
  priority_queue<P, vector<P>, greater<P> > q;
  fill(d, d + num_vertex + 1, kInf);
  d[start] = 0;
  q.push(P(0, start));

  while(q.size()){
	P p = q.top();
	q.pop();
	int from = p.second;
	if(d[from] < p.first){
	  continue;
	}

	for(int i=0; i<G[from].size(); i++){
	  Edge e = G[from][i];
	  // new route requires less cost
	  if(d[e.to] > d[from] + e.cost){
		d[e.to] = d[from] + e.cost;
		q.push(P(d[e.to], e.to));
	  }
	}
  }
}


int main(){
  int num_vertex, num_road;
  scanf("%d ", &num_vertex);
  scanf("%d ", &num_road);
  for(int i=0; i<num_road; i++){
	int a, b, c, d;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	G[a].push_back({b, c});
	G[b].push_back({a, d});
  }
  int start, goal, money, cost;
  scanf("%d,%d,%d,%d",&start,&goal,&money,&cost);
  Dijkstra(start, num_vertex);
  cost += d[goal];
  Dijkstra(goal, num_vertex);
  cost += d[start];

  printf("%d\n", money - cost);
}