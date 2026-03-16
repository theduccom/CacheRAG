#include <iostream>
#include <vector>
using namespace std;
struct edge {int from, to, cost;};
const int INF = 1000000;

void warshall_floyd(std::vector< std::vector<int> > & array, int V) {
  for(int k=0;k<V;k++)
   for(int i=0;i<V;i++)
    for(int j=0;j<V;j++)
     array[i][j] = std::min(array[i][j], array[i][k]+array[k][j]);
}
int main() {
  while(true) {
    int n, m;
    cin >> n >> m;
    if(n==0 && m==0) break;
    vector< vector<int> > cost(m, vector<int>(m, INF));
    vector< vector<int> > time(m, vector<int>(m, INF));
    for(int i=0;i<m;i++) {
      cost[i][i] = 0;
      time[i][i] = 0;
    }

    for(int i=0;i<n;i++) {
      int ai, bi, ci, ti;
      cin >> ai >> bi >> ci >> ti;
      ai--; bi--;
      cost[ai][bi] = ci;
      cost[bi][ai] = ci;
      time[ai][bi] = ti;
      time[bi][ai] = ti;
    }
    warshall_floyd(cost, m);
    warshall_floyd(time, m);


    int k;
    cin >> k;
    for(int i=0;i<k;i++) {
      int pi, qi, ri;
      cin >> pi >> qi >> ri;
      pi--;qi--;
      if(ri)
        cout << time[pi][qi] << endl;
      else
        cout << cost[pi][qi] << endl;
    }
  }
}