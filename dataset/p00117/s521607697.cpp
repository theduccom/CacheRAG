#include<cstdio>
#include<algorithm>
using namespace std;

#define INF (1<<29)

int m;
int graph[101][101];

void wa(){

  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
      for(int k=1;k<=m;k++){
	graph[j][k] = min(graph[j][k],graph[j][i]+graph[i][k]);
      }
    }
  }
  
}

int main(){
  int n,a,b,c,d,k;
  
  scanf("%d %d",&m,&n);
    
  fill_n(*graph,101*101,INF);
  for(int i=1;i<=m;i++) graph[i][i]=0;
  
  for(int i=0;i<n;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    graph[a][b]=c;
    graph[b][a]=d;
  }
  
  wa();
  
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  printf("%d\n",c-d-graph[a][b]-graph[b][a]);

  return(0);
}

