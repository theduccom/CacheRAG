// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0117
#include <iostream>
#include <vector>
using namespace std;

const int INF = 1<<28;

int main(){
  int n,m;
  cin>>n>>m;
  char dummy;
  vector<vector<int>> d(n, vector<int> (n,INF));
  for(int i=0;i<m;++i){
    int a,b,c,e;
    cin>>a>>dummy>>b>>dummy>>c>>dummy>>e;

    d[a-1][b-1] = c;
    d[b-1][a-1] = e;
  }

  int x1,x2,y1,y2;
  cin>>x1>>dummy>>x2>>dummy>>y1>>dummy>>y2;

  // wa-sharufuroidohou
  for(int k = 0; k < n; ++k)
    for(int i = 0; i < n; ++i)
      for(int j = 0; j < n; ++j) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

  int ans = y1 - y2 - (d[x1-1][x2-1] + d[x2-1][x1-1]);

  cout << ans << endl;

  return 0;
}