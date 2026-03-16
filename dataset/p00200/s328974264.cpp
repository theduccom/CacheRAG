#define NODE 0
#define WEIGHT 1
#define COST_IDX 0
#define TIME_IDX 1
#define P_IDX 0
#define Q_IDX 1
#define R_IDX 2
#include <iostream>
#include <cstring>
using namespace std;

int n, m, k;
int weights[101][101][2];
int min_w[101][101][2];
int requests[200][3];

bool read_input() {
  cin >> n >> m;
  if (n*m == 0) 
    return false;
  memset(weights, 0, sizeof(int)*101*101*2);
  memset(min_w, 0, sizeof(int)*101*101*2);
  for (int i = 0; i < n; i++) {
    int a, b, c, t;
    cin >> a >> b >> c >> t;
    weights[a][b][COST_IDX] = weights[b][a][COST_IDX] = c;
    weights[a][b][TIME_IDX] = weights[b][a][TIME_IDX] = t;
  }
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> requests[i][P_IDX] >> requests[i][Q_IDX] >> requests[i][R_IDX];
  }
  return true;
}

int resolve_request(int i_th) {
  int p, q, r;
  p = requests[i_th][P_IDX];
  q = requests[i_th][Q_IDX];
  r = requests[i_th][R_IDX];

  if (min_w[p][q][r])
    return min_w[p][q][r];

  int weight_sum_map[101];
  int in_queue[101] = {}; // set all to 0
  memset(weight_sum_map, -1, sizeof(int)*101);
  
  /* starting node has weight_sum of 0 */
  weight_sum_map[p] = 0;
  in_queue[p] = 1;
  int current_node = p; // first in queue is p

  while (current_node != q) {
    int weight_sum = weight_sum_map[current_node];
    in_queue[current_node] = 0;
    min_w[p][current_node][r] = weight_sum;
    
    for (int i = 1; i < 101; i++) {
      if (!weights[current_node][i][r]) 
	continue;
      int adj_node = i;
      int w = weights[current_node][adj_node][r];
      int new_weight_sum =  weight_sum + w;
      if (weight_sum_map[adj_node] == -1 || new_weight_sum < weight_sum_map[adj_node]) {
	weight_sum_map[adj_node] = new_weight_sum;
	in_queue[adj_node] = 1;
      }
    }
    
    int min_sum = -1;
    for (int i = 1; i < 101; i++) {
      if (in_queue[i] && (min_sum == -1 || weight_sum_map[i] < min_sum)) {
	min_sum = weight_sum_map[i];
	current_node = i;
      }
    }
  }
  return weight_sum_map[q];
}

void solve() {
  for (int i = 0; i < k; i++)
    cout << resolve_request(i) << endl;
}

int main() {
  while(read_input()) {
    solve();
  }
  return 0;
}