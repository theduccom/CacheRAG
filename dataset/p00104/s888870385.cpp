#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cstring>
using namespace std;
int W,H;
char fie[102][102];
int cost[102][102];
char df[]={'>','v','<','^'};
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int main(){
  while(1){
    cin >> H >> W;
    memset(fie,-1,sizeof(fie));
    memset(cost,0,sizeof(cost));
    if(W==0 && H==0) break;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
	cin >> fie[j][i];
      }
    }
    int x=0,y=0;
    bool f=false;
    cost[x][y]=1;
    while(fie[x][y]!='.'){
      for(int i=0;i<4;i++){
	
	if(fie[x][y]==df[i]){
	  x+=dx[i];
	  y+=dy[i];
	}
      }
      if(cost[x][y]){
	f=true;
	break;
      }
      cost[x][y]=1;
    }
    if(!f) printf("%d %d\n",x,y);
    else puts("LOOP");
  }
}