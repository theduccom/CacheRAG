#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
  const int MAX=20;
  const int INF=(1<<21);
int main(){
  int n,m;
  int a,b,c,d;
  int x1,x2,y1,y2;
  int road[MAX][MAX];
  cin>> n>> m;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      road[i][j]=INF;
    }
  }
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    road[a-1][b-1]=c;
    road[b-1][a-1]=d;
  }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
	road[j][k]=min(road[j][k],road[j][i]+road[i][k]);
      }
    }
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  cout<< y1-(y2+road[x1-1][x2-1]+road[x2-1][x1-1])<< endl;
}