#include<cstdio>
#include<iostream>
using namespace std;
int f[11][11]={{0}};
char m[11][11];
int h,w;
void dfs(int y,int x){
  
  f[y][x]=1;
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      if(y+i>=0 && y+i<h && x>=0 && x<w){
	if(m[y+i][x]=='1' && f[y+i][x]==0)dfs(y+i,x);
	f[y+i][x]=1;
      }
      if(y>=0 && y<h && x+j>=0 && x+j<w){
	if(m[y][x+j]=='1' && f[y][x+j]==0)dfs(y,x+j);
	f[y][x+j]=1;
      }
      if(y-i>=0 && y-i<h && x>=0 && x<w){
	if(m[y-i][x]=='1' && f[y-i][x]==0)dfs(y-i,x);
	f[y-i][x]=1;
      }
      if(y>=0 && y<h && x-j>=0 && x-j<w){
	if(m[y][x-j]=='1' && f[y][x-j]==0)dfs(y,x-j);
	f[y][x-j]=1;
      }
    }
  }
  return ;
}
int main(){
  
  int n,cnt=1;
  scanf("%d",&n);
  while(cnt<=n){
    int x,y;
    h=w=8;
    for(int i=0;i<h;i++){
      scanf("%s",m[i]);
    }
    scanf("%d %d",&x,&y);
    x--;y--;
    
    dfs(y,x);
    
    printf("Data %d:\n",cnt);
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(f[i][j])printf("0");
	else printf("%c",m[i][j]);
	f[i][j]=0;
      }
      printf("\n");
    }	
    cnt++;
  }
    
  return 0;
}