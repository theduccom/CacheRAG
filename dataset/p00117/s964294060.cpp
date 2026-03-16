#include <iostream>
#include <cstdio>

using namespace std;

int di[21][21], n, m, s, e, i, j, mi, a, b, c, d, p, in, ha;

int dic(int start, int goal) {
  int min, mi = start, cost[200], f[21] = {0};
  for(i = 0; i < 200; i++) cost[i] = 100000000;
  cost[mi] = 0;//テ」ツつケテ」ツつソテ」ツδシテ」ツδ暗」ツつ津ッツシツ静」ツ?ァテ・ツ按敕ヲツ慊淌・ツ個?

  for(i = 0; i < n; i++) {
    f[mi] = 1;
    for(j = 1; j <= n; j++) {
      if(f[j]) continue;
      if(cost[j] > cost[mi] + di[mi][j]) cost[j] = cost[mi] + di[mi][j];
    }
    
    min = 200000000;
    for(j = 1; j <= n; j++) {
      if(f[j]) continue;
      if(min > cost[j]) min = cost[mi = j];
    }
  }
  return cost[goal];
}


int main(){
 
  for(i = 0; i < 20; i++) {
    for(j = 0; j < 20; j++) di[i][j] = 100000000;
  }
  
  scanf("%d%d", &n, &m);
  while(m--) {
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    di[a][b] = c;
    di[b][a] = d;
  }
  scanf("%d,%d,%d,%d", &s, &p, &in, &ha);
  cout << in - dic(s, p) - dic(p, s) - ha << endl; 
  return 0;
}