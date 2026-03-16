#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
  int table[200][200] = { 0 };

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      scanf("%d", &table[i][j]);
      table[n][j] += table[i][j];
      table[i][n] += table[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    table[n][n] += table[i][n];
  }
  for (int i = 0; i < n + 1; i++){
    int j = 0;
    printf("%5d", table[i][0]);
    for (j = 1; j < n + 1; j++){
      printf("%5d", table[i][j]);
    }
    printf("\n");
  }
}

int main(){
  while (scanf("%d", &n), n)solve();
  return 0;
}