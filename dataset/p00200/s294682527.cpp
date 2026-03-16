#include<cstdio>
#include<algorithm>
using namespace std;

#define INF (1<<29)

int m;
int graph[2][101][101];

void wa(int num){

  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
      for(int k=1;k<=m;k++){
	graph[num][j][k] = min(graph[num][j][k],graph[num][j][i]+graph[num][i][k]);
      }
    }
  }
  
}

int main(){
  int n,a,b,c,d,k;
  
  while(scanf("%d %d",&n,&m),n!=0&&m!=0){
    
    fill_n(**graph,2*101*101,INF);
    for(int i=1;i<=m;i++){
      graph[0][i][i] = 0;
      graph[1][i][i] = 0;
    }
    
    for(int i=0;i<n;i++){
      scanf("%d %d %d %d",&a,&b,&c,&d);
      graph[0][a][b] = c;
      graph[0][b][a] = c;
      graph[1][a][b] = d;
      graph[1][b][a] = d;
    }
    
    wa(0);
    wa(1);
    
    scanf("%d",&k);
    for(int i=0;i<k;i++){
      scanf("%d %d %d",&a,&b,&c);
      printf("%d\n",graph[c][a][b]);
    }
    
  }
  return(0);
}

