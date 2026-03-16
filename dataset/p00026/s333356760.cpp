#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int mp[100][100];
  int x,y,size;
  int siro=100;
  int kosa=0;
  for(int i=20;i<30;i++){
    for(int j=20;j<30;j++){
      mp[i][j]=0;
    }
  }

  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
    x=x+20;
    y=y+20;
    if(size==1){
      if(20<=x && x<=29 && 20<=y && y<=29){
	mp[x][y]++;
	mp[x+1][y]++;
	mp[x][y+1]++;
	mp[x-1][y]++;
	mp[x][y-1]++;
      }
    }
    else if(size==2){
      if(20<=x && x<=29 && 20<=y && y<=29){
	mp[x][y]++;
	mp[x][y-1]++;
	mp[x+1][y-1]++;
	mp[x+1][y]++;
	mp[x+1][y+1]++;
	mp[x][y+1]++;
	mp[x-1][y+1]++;
	mp[x-1][y]++;
	mp[x-1][y-1]++;
      }
    }
    else if(size==3){
      if(20<=x && x<=29 && 20<=y && y<=29){
	mp[x][y]++;
	mp[x][y-1]++;
	mp[x+1][y-1]++;
	mp[x+1][y]++;
	mp[x+1][y+1]++;
	mp[x][y+1]++;
	mp[x-1][y+1]++;
	mp[x-1][y]++;
	mp[x-1][y-1]++;
	mp[x][y-2]++;
	mp[x+2][y]++;
	mp[x][y+2]++;
	mp[x-2][y]++;
      }
    }
  }
  for(int i=20;i<30;i++){
    for(int j=20;j<30;j++){
      if(mp[i][j]!=0) siro--;
      if(kosa<mp[i][j]) kosa=mp[i][j];
    }
  }
  printf("%d\n",siro);
  printf("%d\n",kosa);
}