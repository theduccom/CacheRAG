#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e+9;

int main()
{
  int n,m;
  while(cin >> n >> m, n||m)
  {
    int d[2][101][101];
    for(int i=0; i < 101; i++)
    {
      for(int j=0; j < 101; j++ )
      {
        d[0][i][j] = (i==j)? 0 : INF;
        d[1][i][j] = (i==j)? 0 : INF;
      }
    }

    for(int i=0; i < n; i++)
    {
      int a, b, cost,time;
      cin >> a >> b >> cost >> time;
      d[0][a][b] = cost;
      d[0][b][a] = cost;
      d[1][a][b] = time;
      d[1][b][a] = time;
    }
    for(int k=1; k <= m; k++)
    {
      for(int i=1; i <= m; i++)
      {
        for(int j=1; j <= m; j++)
        {
          d[0][i][j] = min(d[0][i][j], d[0][i][k]+d[0][k][j]);
          d[1][i][j] = min(d[1][i][j], d[1][i][k]+d[1][k][j]);
        }
      }
    }
    int k;
    cin >> k;
    for(int i=0; i < k; i++)
    {
      int p, q, r;
      cin >> p >> q >> r;
      cout << d[r][p][q] << endl;
    }
  }
}