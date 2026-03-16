#include <bits/stdc++.h>
using namespace std;

int paper[50][50];


void dropSmall(int y,int x){
  int dx[] ={0,0,1,-1};
  int dy[] ={1,-1,0,0};
  paper[y][x]++;
  for(int i=0;i<4;i++) paper[y+dy[i]][x+dx[i]]++;
}


void dropMidium(int y,int x){
  for(int dy=-1;dy<=1;dy++)
    for(int dx=-1;dx<=1;dx++)paper[y+dy][x+dx]++;
}

void dropLarge(int y,int x){
  dropMidium(y,x);
  int dx[] = {0,0,2,-2};
  int dy[] = {2,-2,0,0};
  for(int i=0;i<4;i++) paper[y+dy[i]][x+dx[i]]++;
}


int main(){
  int x,y,s;
  while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
    x+=10;
    y+=10;
    if(s == 1)dropSmall(y,x);
    if(s == 2)dropMidium(y,x);
    if(s == 3)dropLarge(y,x);
  }

  int cnt = 0;
  int mx = 0;
  for(int i=10;i<20;i++)
    for(int j=10;j<20;j++){
      if(paper[i][j] == 0) cnt++;
      if(paper[i][j] > mx) mx = paper[i][j];
    }
  
  cout<<cnt<<endl;
  cout<<mx<<endl;
  
  return 0;
}