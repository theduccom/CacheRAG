#include <stdio.h>

int main(){

  int n;

  while(1){
    scanf("%d", &n);
    if(n==0) break;

    int t[n+1][n+1];
    int i,j;
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d", &t[i][j]);

    t[n][n] = 0;

    for(i=0;i<n;i++){
      t[n][i] = 0;
      for(j=0;j<n;j++) t[n][i] += t[j][i];
      t[n][n] += t[n][i];
    }

    for(i=0;i<n;i++){
      t[i][n] = 0;
      for(j=0;j<n;j++) t[i][n] += t[i][j];
      t[n][n] += t[i][n];
    }

    t[n][n] /= 2;

    for(i=0;i<=n;i++){
      for(j=0;j<=n;j++) printf("%5d", t[i][j]);
      puts("");
    }
  }

  return 0;
}