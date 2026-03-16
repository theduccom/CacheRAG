#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>

#define SIZE 100
#define INF 1000000
using namespace std;

int main(){

  int i,j,k;
  int n,m;
  int a,b,c,d;
  int s,g,x,y;
  int cost[SIZE][SIZE];

  cin>>n;
  cin>>m;

  for(i=1;i<n+1;i++){
    for(j=1;j<n+1;j++){
      cost[i][j]=INF;
    }
  }

  for(i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);

    cost[a][b]=c;
    cost[b][a]=d;
  }

  for(i=1;i<n+1;i++){
    for(j=1;j<n+1;j++){
      for(k=1;k<n+1;k++){
	cost[j][k]=min(cost[j][k],cost[j][i]+cost[i][k]);
      }
    }
  }

  scanf("%d,%d,%d,%d",&s,&g,&x,&y);

  x-=cost[s][g]+cost[g][s]+y;
  printf("%d\n",x);

  return 0;
}