#include <iostream>
#include <cstdio>
using namespace std;
int mp[21][21];
void drop(int x,int y,int size){
  if(size==1)mp[y][x]++,mp[y+1][x]++,mp[y-1][x]++,mp[y][x+1]++,mp[y][x-1]++;
  if(size==2 || size==3)
    for(int i=-1;i<=1;i++)
      for(int j=-1;j<=1;j++) mp[y+i][x+j]++;
  if(size==3) mp[y+2][x]++,mp[y-2][x]++,mp[y][x+2]++,mp[y][x-2]++;
}
int main() {
  int x,y,size;
  while(scanf("%d,%d,%d",&x,&y,&size) != EOF) drop(x+10,y+10,size);
  int cnt=100,mxsize=0;
  for(int i=10;i<20;i++)
    for(int j=10;j<20;j++)
      if(mp[i][j] != 0)cnt--,mxsize=max(mxsize,mp[i][j]);
  cout << cnt <<endl<<mxsize<<endl;
  return 0;
}