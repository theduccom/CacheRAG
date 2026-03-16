#include<cstdio>
#include<iostream>
using namespace std;

int memo[22][22]={0};

void fanc(int y,int x){
  if(y>=12 || x>=12 || y<0 || x<0 || memo[y][x]==0) return;
  if(memo[y][x]){
    memo[y][x]=0;
    fanc(y-1,x);
    fanc(y+1,x);
    fanc(y,x-1);
    fanc(y,x+1);
  }
  return ;
}

int DFS(){

  int cnt=0;
  for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
      if(memo[i][j]){
	fanc(i,j);
	cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  
  int flg=1;
  while(flg){
    for(int i=0;i<12 && flg;i++){
      for(int j=0;j<12 && flg;j++){
	char c;
	if(scanf(" %c",&c) == EOF) flg=0;
	memo[i][j] = c-'0';
      }
    }
    if(flg) printf("%d\n",DFS());
  }
  return 0;
}