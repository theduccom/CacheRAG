#include <cstdio>
#define INF 10000000

int n,m,x1,x2,y1,y2;
int fee[21][21];
int ans[21][21];

int main(){
  scanf("%d %d",&n,&m);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      fee[i][j] = i==j?0:INF;
    }
  }

  for(int i=0; i<m; i++){
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    fee[a][b] = c;
    fee[b][a] = d;
  }

  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

  for(int k=1; k<=n; k++){
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
	if(fee[i][j] > fee[i][k]+fee[k][j]){
	  fee[i][j] = fee[i][k]+fee[k][j];
	}
      }
    }
  }

  printf("%d\n", y1-y2-fee[x1][x2]-fee[x2][x1]);
}