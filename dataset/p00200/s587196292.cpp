#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

const int INF = 10000000;

using Mat = std::vector< std::vector<int> >;

void wf(Mat& adj_mat) {
  int n = adj_mat.size();

  for(int i = 0; i < n; ++i) {     // via node
    for(int j = 0; j < n; ++j) {   // start
      for(int k = 0; k < n; ++k) { // terminal
        adj_mat[j][k] = std::min(adj_mat[j][k], adj_mat[j][i] + adj_mat[i][k]);
      }
    }
  }
}

int main() {
  while(1){
    int n, m;
    int a, b, cost, time;

    std::cin >> n >> m;
    if (n == 0)
      break;

    Mat cost_table, time_table;
    cost_table.resize(m);
    time_table.resize(m);
    for(int i = 0; i < m; ++i) {
      cost_table.at(i).resize(m);
      time_table.at(i).resize(m);
      for(int j = 0; j < m; ++j){
        cost_table[i][j] = INF;
        time_table[i][j] = INF;
      }
    }

    for(int i = 0; i < n; ++i){
      std::cin >> a >> b >> cost >> time;
      --a, --b;
      cost_table[a][b] = cost_table[b][a] = cost;
      time_table[a][b] = time_table[b][a] = time;
    }

    wf(cost_table);
    wf(time_table);

    // Query
    int k;
    int p, q, r;
    std::cin >> k;
    for(int i = 0; i < k; ++i){
      std::cin >> p >> q >> r;
      --p, --q;
      if (r == 0)
        std::cout << cost_table[p][q] << std::endl;
      else
        std::cout << time_table[p][q] << std::endl;
    }
  }
}