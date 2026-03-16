#include<map>
#include<queue>
#include<cstdio>
#include<cstring>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define SIZE 110
using namespace std;

typedef pair<int,int> P;

void solve(void);       //処理

int n;             //ブロックの個数
int w,h;           //ボードの幅、高さ
int goal;          //迷路になっているか
int scolor;        //スタート位置の色
int sx,sy,gx,gy;   //スタートの座標、ゴールの座標
int mass[SIZE][SIZE];
int data[SIZE][SIZE];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int c,d,x,y;       //ブロックの色、向き、左上の座標


int main(){

  int i,j;             //カウンタ変数

  while(1){

    goal=0;

    /*情報の入力*/
    cin>>w>>h;

    if(w==0 && h==0)break;
    
    cin>>sx>>sy;
    cin>>gx>>gy;  
    cin>>n;
    
    memset(mass,0,sizeof(mass));

    for(i=0;i<n;i++){
      cin>>c>>d>>x>>y;
      
    if(d==0){       //横向きなら
      for(j=0;j<4;j++){
	mass[y][x+j]=c;
	mass[y+1][x+j]=c;
      }
    }
    else if(d==1){              //縦向きなら
      for(j=0;j<4;j++){
	mass[y+j][x]=c;
	mass[y+j][x+1]=c;
      }
    }
  }
  
  scolor=mass[sy][sx];

  if(gx==sx && gy==sy)cout<<"OK"<<endl;

  else if(scolor==mass[gy][gx]){
  
    solve();
    
    if(goal==1){
      cout<<"OK"<<endl;
    } else {
      cout<<"NG"<<endl;
    }
  }
  else {
    cout<<"NG"<<endl;
  }

  }
  
  return 0;
}
void solve(void){
  
  int i,j;
  queue<P> que;
  memset(data,-1,sizeof(data));
  que.push(P(sy,sx));     //queにスタート位置の座標を格納
  data[sy][sx]=0;
  
  while(!que.empty()){    //queが空でない間
    P p=que.front();
    que.pop();
    
    if(p.first==gy && p.second==gx){
      goal=1;
      break;
    }
    for(i=0;i<4;i++){
      int ny=p.first+dy[i];
      int nx=p.second+dx[i];
      if(nx>=0 && nx<=w && ny>=0 && ny<=h && mass[ny][nx]==scolor && data[ny][nx]==-1){
	que.push(P(ny,nx));
	data[ny][nx]=1;
      }
    }
  }
  return;
}