#include<iostream>
using namespace std;
#define W 10+2+2
#define H 10+2+2

int main()
{
  int field[W][H]={0},x,y,size,max,cnt,i,j;
  while(scanf("%d,%d,%d",&x,&y,&size)!=EOF){
    x+=2;y+=2;
    if(size==1){
      field[x][y]++;
      field[x-1][y]++;
      field[x+1][y]++;
      field[x][y-1]++;
      field[x][y+1]++;
    }else if(size==2){
      field[x][y]++;
      field[x-1][y]++;
      field[x+1][y]++;
      field[x][y-1]++;
      field[x][y+1]++;
      field[x-1][y-1]++;
      field[x-1][y+1]++;
      field[x+1][y-1]++;
      field[x+1][y+1]++;
    }else{
      field[x][y]++;
      field[x-1][y]++;
      field[x+1][y]++;
      field[x][y-1]++;
      field[x][y+1]++;
      field[x-1][y-1]++;
      field[x-1][y+1]++;
      field[x+1][y-1]++;
      field[x+1][y+1]++;
      field[x-2][y]++;
      field[x+2][y]++;
      field[x][y-2]++;
      field[x][y+2]++;
    }
  }
  max=0;
  cnt=0;
  for(i=2;i<12;i++)for(j=2;j<12;j++){
    cnt+=field[i][j]==0;
    if(max<field[i][j])max=field[i][j];
  }
  cout<<cnt<<endl<<max<<endl;
}