#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

#define INF 1e9

vector<int> dijk(int s, vector<vector<pair<int, int> > > adjlist){
  int n = adjlist.size();
  vector<int> result(n, INF);

  priority_queue<pair<int, int> > wait;
  wait.push(make_pair(0, s));
  result[s] = 0;
  while(!wait.empty()){
    int nowcost = -wait.top().first;
    int nowpoint = wait.top().second;
    wait.pop();
    if(nowcost > result[nowpoint]){ continue; }

    for(int i = 0; i < (int)adjlist[nowpoint].size(); i++){
      int nextcost = nowcost + adjlist[nowpoint][i].first;
      int nextpoint = adjlist[nowpoint][i].second;
      if(result[nextpoint] > nextcost){
        result[nextpoint] = nextcost;
        wait.push(make_pair(-nextcost, nextpoint));
      }
    }    
  }

  return result;
}


int main(void){
  while(true){
    int n, m;
    cin >> n >> m;
    if(n == 0 && m == 0){ break; }
    
    int a, b, cost, time;
    vector<vector<pair<int, int> > > adjlist_cost(m);
    vector<vector<pair<int, int> > > adjlist_time(m);
    for(int i = 0; i < n; i++){
      cin >> a >> b >> cost >> time;
      --a;
      --b;
      adjlist_cost[a].push_back(make_pair(cost, b));
      adjlist_cost[b].push_back(make_pair(cost, a));
      adjlist_time[a].push_back(make_pair(time, b));
      adjlist_time[b].push_back(make_pair(time, a));
    }

    int k;
    cin >> k;

    int p, q, r;
    vector<int> result;
    for(int i = 0; i < k; i++){
      cin >> p >> q >> r;
      --p;
      --q;
      result = (r == 0) ? dijk(p, adjlist_cost) : dijk(p, adjlist_time);
      cout << result[q] << endl;
    }
  }

  return 0;
}