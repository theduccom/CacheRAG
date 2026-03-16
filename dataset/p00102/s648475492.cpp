#include <cstdio>
#include <cstring>
int main(void)
{
  while(1){
    int n;
    int d[111][111];
    scanf("%d",&n);
    if(!n) break;
    memset(d,0,sizeof(d));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
	scanf("%d",&d[i][j]);
	d[n][j] += d[i][j];
	d[i][n] += d[i][j];
	d[n][n] += d[i][j];
      }
    }
    for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
	printf("%5d",d[i][j]);
      }
      puts("");
    }
  }
}