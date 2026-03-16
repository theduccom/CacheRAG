#include<bits/stdc++.h>
using namespace std;
const int INF = 1 << 28;


void Floyd_Warshall(vector< vector< int > >& graph){
  for(int k = 0; k < graph.size(); k++){
    for(int i = 0; i < graph.size(); i++){
      for(int j = 0; j < graph.size(); j++){
        graph[i][j] = min( graph[i][j], graph[i][k] + graph[k][j]);
      }
    }
  }
  return ;
}

int main() {
  int n, m;
  vector< vector< int > > graph1, graph2;

  while(cin >> n >> m, n){
    graph1.assign(m, vector< int >(m, INF));
    graph2.assign(m, vector< int >(m, INF));
    for(int i = 0; i < n; i++){
      int a, b, cost, time;
      cin >> a >> b >> cost >> time;
      --a, --b;
      graph1[a][b] = graph1[b][a] = cost;
      graph2[a][b] = graph2[b][a] = time;
    }
    Floyd_Warshall(graph1);
    Floyd_Warshall(graph2);

    int k;
    cin >> k;
    while(k--){
      int p, q, r;
      cin >> p >> q >> r;
      --p, --q;
      if(r == 0) cout << graph1[p][q] << endl;
      else cout << graph2[q][p] << endl;
    }
  }
}