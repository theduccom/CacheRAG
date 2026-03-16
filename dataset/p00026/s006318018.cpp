#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<utility>
#include<string>

using namespace std;

int si[4]={0,5,9,13};
int dxl[13]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
int dyl[13]={2,1,1,1,0,0,0,0,0,-1,-1,-1,-2};
int dxm[9]={-1,0,1,-1,0,1,-1,0,1};
int dym[9]={1,1,1,0,0,0,-1,-1,-1};
int dxs[5]={0,-1,0,1,0};
int dys[5]={1,0,0,0,-1};

int p[10][10];

main(){
  int x,y,b,i,j;
  int noi=0,maxi=0;
  while(scanf("%d,%d,%d",&x,&y,&b)!=EOF){
    if(b==1){
      for(i=0;i<5;i++){
	if(0<=x+dxs[i] && x+dxs[i]<10 && 0<=y+dys[i] && y+dys[i]<10) p[x+dxs[i]][y+dys[i]]++;
      }
    }
    if(b==2){
      for(i=0;i<9;i++){
	if(0<=x+dxm[i] && x+dxm[i]<10 && 0<=y+dym[i] && y+dym[i]<10) p[x+dxm[i]][y+dym[i]]++;
      }
    }
    if(b==3){
      for(i=0;i<13;i++){
	if(0<=x+dxl[i] && x+dxl[i]<10 && 0<=y+dyl[i] && y+dyl[i]<10) p[x+dxl[i]][y+dyl[i]]++;
      }
    }
  }
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(p[i][j]==0) noi++;
      else if(p[i][j] > maxi) maxi=p[i][j];
    }
  }
  cout << noi << endl << maxi << endl;
}