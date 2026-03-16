#include <iostream>
#include <queue>
#include <climits>
#include <vector>
#include <functional>

using namespace std;

const int INFINITY = INT_MAX;

struct Node{
  vector<int> edgeTo;
  vector<int> edgeCost;
  bool done;
  int cost;
};

class compf: public binary_function<struct Node, struct Node, bool>{
public:
  result_type operator()(first_argument_type first, second_argument_type second){
    return (first.cost - second.cost) > 0;
  }
};

int Dijkstra(int start, int goal, struct Node *town){
  priority_queue<struct Node, vector<struct Node> , compf> priQueue;

  town[start].cost = 0;
  priQueue.push(town[start]);


  while(priQueue.empty() == false){
    struct Node doneNode = priQueue.top(); priQueue.pop();
    if(doneNode.done == true) continue;
    doneNode.done = true;
    for(int i = 0; i < doneNode.edgeTo.size(); i++){
      int to = doneNode.edgeTo[i];
      unsigned int cost = (unsigned int)doneNode.cost + doneNode.edgeCost[i];
      if(cost < town[to].cost){
	town[to].cost = cost;
	priQueue.push(town[to]);
#if DEBUG
	printf("town No.%d is pushed.\n", i);
#endif
      }
    }
  }
#if DEBUG
  for(int i = 0; i < 7; i++){
    printf("i = %d, cost = %d\n", i, town[i].cost);
  }
#endif
  return town[goal].cost;
}

int main(){
  int n, m;
  cin >> n >> m;
  struct Node town[n + 1];

  for(int i = 0; i < n + 1; i++){
    town[i].done = false;
    town[i].cost = INFINITY;
  }

  for(int i = 0; i < m; i++){
    int a, b, c, d;
    char t;
    cin >> a >> t >> b >> t >> c >> t >> d;
    town[a].edgeTo.push_back(b);
    town[a].edgeCost.push_back(c);
    town[b].edgeTo.push_back(a);
    town[b].edgeCost.push_back(d);    
  }

  int start, yamazato, reward, polePrice;
  char t;
  cin >> start >> t >> yamazato >> t >> reward >> t >> polePrice;

  int gotoCost = Dijkstra(start, yamazato, town);

  for(int i = 0; i < n + 1; i++){
    town[i].done = false;
    town[i].cost = INFINITY;
  }

  int gobackCost = Dijkstra(yamazato, start, town);

  cout << reward - gotoCost - gobackCost - polePrice << endl;
  return 0;
}