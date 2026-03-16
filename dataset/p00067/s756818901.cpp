#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int d[12][12];

void poyo(int i, int j)
{
  if (i < 0 || 12 <= i || j < 0 || 12 <= j) return;
  if (d[i][j] == 0)return;
  d[i][j] = 0;
  for (int k = 0; k < 4; k++){
    poyo(i + dy[k], j + dx[k]);
  }
}

int main()
{
  int n;

  while (~scanf("%1d", &n)){
    d[0][0] = n;
    for (int i = 0; i < 12; i++){
      for (int j = 0; j < 12; j++){
        if (i + j == 0) continue;
        scanf("%1d", &d[i][j]);
      }
    }

    int cnt = 0;
    for (int i = 0; i < 12; i++){
      for (int j = 0; j < 12; j++){
        if (d[i][j] == 1){
          cnt++;
          poyo(i, j);
        }
      }
    }

    cout << cnt << endl;
  }
}