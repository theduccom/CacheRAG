#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
  int c[101][101], t[101][101], n, m, a, b, u, v;

  while(1){
    cin >> n >> m;

    if(n == 0 && m == 0){
      break;
    }

    fill(&c[1][1], &c[m][m], 99999);
    fill(&t[1][1], &t[m][m], 99999);

    for(int i = 1; i <= m; i++){
      c[i][i] = t[i][i] = 0;
    }

    for(int i = 0; i < n; i++){
      cin >> a >> b >> u >> v;
      c[a][b] = c[b][a] = u;
      t[a][b] = t[b][a] = v;
    }

    for(int k = 1; k <= m; k++){
      for(int i = 1; i <= m; i++){
	for(int j = 1; j <= m; j++){
	  c[i][j] = (c[i][j] < c[i][k]+c[k][j])? c[i][j] : c[i][k]+c[k][j];
	  t[i][j] = (t[i][j] < t[i][k]+t[k][j])? t[i][j] : t[i][k]+t[k][j];
	}
      }
    }
    cin >> n;
    while(n--){
      cin >> a >> b >> u;
      if(u == 0){
	cout << c[a][b] << endl;
      } else {
	cout << t[a][b] << endl;
      }
    }
  }

  return 0;
}