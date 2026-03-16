#include<iostream>
#include<cstdio>
const int INF=100100100;
using namespace std;
int n,m;
int K[32][32];

int main(){

  scanf("%d%d", &n,&m);
  

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      K[i][j]=INF;
    }
  }
  int a,b,c,d;
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    K[a][b]=c;
    K[b][a]=d;
  }
  int start,goal,inp,val;
  scanf("%d,%d,%d,%d",&start,&goal,&inp,&val);
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
	if(K[i][j] > K[i][k]+K[k][j]){
	  K[i][j]=K[i][k]+K[k][j];
	}
      }
    }
  }
  int ans=inp-val-K[start][goal]-K[goal][start];
  printf("%d\n",ans);
}

  
  
    

  