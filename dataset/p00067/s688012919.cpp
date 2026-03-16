#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

char mass[14][14];
int  dx[4]={1,0,-1,0};
int  dy[4]={0,1,0,-1};
int  cnt=0;

int dfs(int x,int y);
int main(){

  int i,j;

  while(scanf("%s",mass[0])!=EOF){

    for(i=1;i<12;i++){
      scanf("%s",mass[i]);
    }


    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
	if(mass[i][j]=='1'){
	  cnt++;
	  dfs(j,i);
	}
      }
    }

    cout<<cnt<<endl;
    cnt=0;
  }

  return 0;
}

int dfs(int x,int y){

  int i;
  mass[y][x]='0';

  for(i=0;i<4;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];

    if(nx>=0 && nx<12 && ny>=0 && ny<12 && mass[ny][nx]=='1'){
      dfs(nx,ny);
    }

  }

  return 0;
}