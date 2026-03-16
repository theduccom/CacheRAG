/*********
深さ優先探索
**********/

#include<iostream>
#include<cstdio>
#include<algorithm>
#define MAX 100

//入力
int n,m;
char field[MAX][MAX]={-1};//庭

//プロトタイプ宣言
void bfs(int x,int y);
void slove();



int main(){
  int i,j,flag;

  while(1){

    for(i=0;i<12;i++){
      flag=0;
      if(scanf("%s",field[i])==EOF) flag=-1;
    }

    if(flag==-1) break;
    slove();
  }

  return 0;
}



void bfs(int i,int j){
  //今いるところを、.に置き換える
  field[i][j]='0';

  //移動する4方向を調べる
  if(0<=j && j<12 && 0<=i-1 && i-1<12 && field[i-1][j]=='1') bfs(i-1,j);
  if(0<=j-1 && j-1<12 && 0<=i && i<12 && field[i][j-1]=='1') bfs(i,j-1);
  if(0<=j+1 && j+1<12 && 0<=i && i<12 && field[i][j+1]=='1') bfs(i,j+1);
  if(0<=j && j<12 && 0<=i+1 && i+1<12 && field[i+1][j]=='1') bfs(i+1,j);

 return ;
}

void slove(){
  int res=0;
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
      if(field[i][j]=='1'){
	//wが残っているならそこからbfsを始める
	bfs(i,j);
	res++;
      }
    }
  }
  printf("%d\n",res);
}