#include <iostream>
using namespace std;

int m[10][10];
int ax[12]={0,1,0,-1,1,1,-1,-1,0,2,0,-2};
int ay[12]={-1,0,1,0,-1,1,1,-1,-2,0,2,0};

void dfs(int x,int y,int size){
  m[x][y]+=1;
  if(size==1){
    for(int i=0;i<4;i++){
      if(x-ax[i]<0 || x-ax[i]>9 || y-ay[i]<0 || y-ay[i]>9) continue;
      m[x-ax[i]][y-ay[i]]+=1;
    }
  }else if(size==2){
    for(int i=0;i<8;i++){
      if(x-ax[i]<0 || x-ax[i]>9 || y-ay[i]<0 || y-ay[i]>9) continue;
      m[x-ax[i]][y-ay[i]]+=1;
    }
  }else if(size==3){
    for(int i=0;i<12;i++){
      if(x-ax[i]<0 || x-ax[i]>9 || y-ay[i]<0 || y-ay[i]>9) continue;
      m[x-ax[i]][y-ay[i]]+=1;
    }
  }

}


int main(){
  int x,y,size,clear=0,color=0;

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      m[i][j]=0;
    }
  }

  while(scanf("%d,%d,%d",&x,&y,&size) != EOF){
    dfs(x,y,size);
  }

  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(m[i][j]==0){
	clear++;
      }else if(m[i][j]>color){
	color=m[i][j];
      }

    }
  }

  cout << clear << endl;
  cout << color << endl;

}