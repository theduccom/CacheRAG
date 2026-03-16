#include<iostream>
#include<cstdio>
using namespace std;
#define loop(i,a,b) for(int i = a ; i < b ; i++)
#define rep(i,a) for(int i = 0 ; i < a ; i++) 

int maze[10][10];
int smallx[5] = { 1,-1, 0, 0, 0};
int smally[5] = { 0, 0, 0, 1,-1};
int midx[4] = { 1, 1,-1,-1};
int midy[4] = { 1,-1, 1,-1};
int largex[4] = { 2,-2, 0, 0};
int largey[4] = { 0, 0, 2,-2};

bool inmaze(int x,int y){
  return (0<=x && x<10) && (0<=y && y<10);
	     
}
void Fsmall(int x,int y){
  rep(i,5)
    if(inmaze(x+smallx[i],y+smally[i]))
       maze[x+smallx[i]][y+smally[i]]++;
       
}
void Fmid(int x,int y){
  rep(i,4)
    if(inmaze(x+midx[i],y+midy[i]))
       maze[x+midx[i]][y+midy[i]]++;
}
void Flarge(int x,int y){
  rep(i,4)
    if(inmaze(x+largex[i],y+largey[i]))
    maze[x+largex[i]][y+largey[i]]++;
}
int main(void){
  int x,y,size;
  rep(i,10)rep(j,10)maze[i][j] = 0;
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF)
    switch(size){
    case 3:
      Flarge(x,y);
    case 2:
      Fmid(x,y);
    case 1:
      Fsmall(x,y);
    }
    
  int no = 0,ma = -1;
  rep(i,10)rep(j,10){
    if(maze[i][j] == 0)no ++;
    ma = max(ma,maze[i][j]);
  }
  cout<<no<<endl<<ma<<endl;
  
}