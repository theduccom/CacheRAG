#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
  int n,m;
  int a,b,c,d;
  int st,go;
  int hi,yo;
  int road[1111][1111];
  cin >> n >> m;
  for(int i=0;i<n;i++){//ありえない大きさの数を入れておく
    for(int j=0;j<n;j++){
      road[i][j]=8478;
    }
  }
  for(int i=0;i<m;i++){//エッジそれぞれにとりあえずの値を置換
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    road[a-1][b-1]=c;
    road[b-1][a-1]=d;
  }
  scanf("%d,%d,%d,%d",&st,&go,&yo,&hi);
  for(int i=0;i<n;i++){//ワーシャルフロイド開始
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
	road[j][k]=min(road[j][k],road[j][i]+road[i][k]);
      }
    }
  }
  cout << yo-(hi+road[st-1][go-1]+road[go-1][st-1]) << endl;//road１つ目は往路、２つ目は復路
}