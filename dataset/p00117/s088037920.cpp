#include <iostream>
#include <map>
#include <queue>
#include <cstdio>
#include <utility>
#include <stdio.h>
#define F first
#define S second
using namespace std;
int n,m;
int cost[111][111];
int dics(int st,int go);
int main(){
  int st,go,yo,ha;//左からスタート、ゴール、予算、柱代金
  int a,b,c,d;//a,b=つないでる街 c=aからbのコスト　d=bからaのコスト
  int iki,kaeri;
  int ans=0;
  cin >> n >> m;
  for(int i=0;i<21;i++){
    for(int j=0;j<21;j++){
      cost[i][j]=999999;
    }
  }
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    cost[a][b]=c;//aからbへのコスト
    cost[b][a]=d;//bからaへのコスト
  }
  scanf("%d,%d,%d,%d",&st,&go,&yo,&ha);
  iki=dics(st,go);
  kaeri=dics(go,st);
  ans=iki+kaeri;
  cout << yo-ha-ans << endl;//予算から柱代金と運賃を引いた褒美
}

int dics(int st,int go){//運賃図りますよー
  int d[1111];//エッジのコスト格納用
  queue<pair<int,int> > q;
  pair<int,int> p;
  for(int i=0;i<21;i++){//めっちゃ多い数を
    d[i]=999999;
  }
  d[st]=0;//スタート地点はコスト0確定だから
  q.push( make_pair(0, st) );
  while(!q.empty()){//見るところが無くなりすべての値が確定するまで
    p=q.front();
    q.pop();
    for(int i=1;i<=n;i++){//各街は1?nで表されるから
      if(cost[p.S][i]!=999999){//通れたら
	if(d[i]>p.F+cost[p.S][i]){//現在のそのエッジまでの最小値よりも小さかったら
	  d[i]=cost[p.S][i]+p.F;
	 q.push( make_pair(d[i], i) );//そこまでのコストと今いる場所
	}
      }
    }
  }
  return d[go];
}