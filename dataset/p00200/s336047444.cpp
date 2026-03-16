#include <iostream>
#include <algorithm>
#define INF 1000000
using namespace std;

main() {
  while(1) {
    int n, m;
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    int data[2][m][m];
    fill(&data[0][0][0], &data[1][m-1][m-1]+1, INF);
    for(int i = 0; i < n; i++) {
      int a, b, c, time;
      cin >> a >> b >> c >> time;
      a--;
      b--;
      data[0][a][b] = data[0][b][a] = c;
      data[1][a][b] = data[1][b][a] = time;
    }

    int k;
    cin >> k;
    for(int t = 0; t < k; t++) {
      int p, q, r;
      cin >> p >> q >> r;
      p--;
      q--;
      
      bool visited[m];
      fill(&visited[0], &visited[m], false);
      int cost[m];
      fill(cost, cost+m, INF);
      cost[p] = 0;
      while(1) {
	int min = INF;
	int index;
	for(int i = 0; i < m; i++) {
	  if(!visited[i] && cost[i] < min) {
	    min = cost[i];
	    index = i;
	  }
	}
	if(min == INF) break;
	visited[index] = true;
	
	for(int i = 0; i < m; i++) {
	  if(visited[i]) continue;
	  int newValue = cost[index] + data[r][index][i];
	  if(newValue < cost[i]) {
	    cost[i] = newValue;
	  }
	}
      }
      cout << cost[q] << endl;
    }
  }
}