#include <iostream>
#include <algorithm>
#include <cstdio>
#define N 13
#define N1 3
#define N2 2
using namespace std;
void Drop(int,int,int);
int data[N][N];
int dy[N1]={-1,0,1};int dx[N1]={-1,0,1};
int dy2[N2]={-1,1};int dx2[N2]={-1,1};
int dy3[N1+1]={-2,0,2,0};int dx3[N1+1]={0,2,0,-2};
int main(){
  int x,y,size,maxv=0,cnt=0;
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
    Drop(y+2,x+2,size);
  }
  for(int i=2;i<N-1;i++){
    for(int j=2;j<N-1;j++){
      maxv=max(maxv,data[i][j]);
      if(data[i][j]==0) cnt++;
    }
  }
  cout << cnt << endl << maxv << endl;
  return 0;
}
void Drop(int y,int x,int size){
  for(int i=0;i<N1;i++)
    for(int j=0;j<N1;j++)
      data[y+dy[i]][x+dx[j]]++;
  if(size==1)
    for(int i=0;i<N2;i++)
      for(int j=0;j<N2;j++)
	data[y+dy2[i]][x+dx2[j]]--;
  if(size==3)
    for(int i=0;i<N1+1;i++)
      data[y+dy3[i]][x+dx3[i]]++;
}