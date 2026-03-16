#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int x,y,size;
  int map[10][10]={};
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
    switch(size){
    case 3:
      if(x>1) map[x-2][y]++;
      if(x<8) map[x+2][y]++;
      if(y>1) map[x][y-2]++;
      if(y<8) map[x][y+2]++;
    case 2:
      if(x>0 && y>0) map[x-1][y-1]++;
      if(x>0 && y<9) map[x-1][y+1]++;
      if(x<9 && y>0) map[x+1][y-1]++;
      if(x<9 && y<9) map[x+1][y+1]++;
    case 1:
      map[x][y]++;
      if(x>0) map[x-1][y]++;
      if(x<9) map[x+1][y]++;
      if(y>0) map[x][y-1]++;
      if(y<9) map[x][y+1]++;
    }
  }
  int max=0;
  int clear=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(map[i][j]==0) clear++;
      if(max < map[i][j]) max= map[i][j];
    }
  }
  cout<<clear<<endl<<max<<endl;
  return 0;
}