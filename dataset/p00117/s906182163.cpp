#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;

int main(){
  int m;
  cin >> n >> m;
  int graph[n+1][n+1];
  //memset(graph,0,sizeof(graph));
  for(int i=0;i<n+1;i++){
    for(int j=0;j<n+1;j++){
      graph[i][j] = 1000000;
    }
  }

  for(int i=0;i<m;i++){
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    graph[a][b] = c;
    graph[b][a] = d;
  }

  for(int k=0;k<=n;k++){
    for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){      
	graph[i][j] = min( graph[i][j], graph[i][k] + graph[k][j]);
      }
    }
  }

  int city1,city2,money,hasira;
  scanf("%d,%d,%d,%d",&city1,&city2,&money,&hasira);
  //city1--;city2--;
  //cout << "行きの代金 : " << graph[city1][city2] << endl;
  money -= graph[city1][city2];
  //cout << "帰りの代金 : " << graph[city2][city1] << endl;
  money -= graph[city2][city1];
  money -= hasira;

  cout << money << endl;
}