#include<iostream>
#include<cstdio>
using namespace std;
int vx[4]={1,0,-1,0};
int vy[4]={0,1,0,-1};
int vx2[4]={2,0,-2,0};
int vy2[4]={0,2,0,-2};
int main(){
  string str;
  int x,y,s;
  int Map[10][10];
  for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
      Map[i][j]=0;
  while(cin>>str){
    x=str[0]-'0';
    y=str[2]-'0';
    s=str[4]-'0';
    switch(s){
    case 1:
      Map[x][y]++;
      for(int i=0;i<4;i++)
	if(x+vx[i]<=9&&x+vx[i]>=0&&y+vy[i]<=9&&y+vy[i]>=0)
	  Map[x+vx[i]][y+vy[i]]++;
      break;
    case 2:
      for(int i=-1;i<=1;i++){
	for(int j=-1;j<=1;j++){
	  if(x+i<=9&&x+i>=0&&y+j<=9&&y+j>=0)
	    Map[x+i][y+j]++;
	}
      }
      break;
    case 3:
      for(int i=-1;i<=1;i++){
	for(int j=-1;j<=1;j++){
	  if(x+i<=9&&x+i>=0&&y+j<=9&&y+j>=0)
	    Map[x+i][y+j]++;
	}
      }
      for(int i=0;i<4;i++)
	if(x+vx2[i]<=9&&x+vx2[i]>=0&&y+vy2[i]<=9&&y+vy2[i]>=0)
	  Map[x+vx2[i]][y+vy2[i]]++;
      break;
    }
    /* for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
	cout<<Map[i][j]<<" ";
      }
      cout<<endl;
      }*/
  }
  int white=0;
  int Max=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(Map[i][j]==0)
	white++;
      Max=max(Max,Map[i][j]);
    }
  }
  cout<<white<<endl<<Max<<endl;
  return 0;
}