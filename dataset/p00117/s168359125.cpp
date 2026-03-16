#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int n,m; scanf("%d%d", &n, &m);
  static int wf[50][50];
  for(int i = 0; i < n; i++) fill(wf[i],wf[i]+n,1000000000);
  for(int i = 0; i < m; i++) {
    int a,b,c,d; scanf("%d,%d,%d,%d", &a, &b, &c, &d); a--; b--;
    wf[a][b] = c;
    wf[b][a] = d;
  }
  int s,g,pr0,pr1; scanf("%d,%d,%d,%d", &s, &g, &pr0, &pr1); s--; g--;
  for(int k = 0; k < n; k++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        wf[i][j] = min(wf[i][j], wf[i][k]+wf[k][j]);
      }
    }
  }
  printf("%d\n", pr0-pr1-wf[s][g]-wf[g][s]);
  return 0;
}