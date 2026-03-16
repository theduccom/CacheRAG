#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
char grid[12][12];
void dfs(int x,int y){
grid[x][y]='0';
for(int dx=-1;dx<=1;dx++){
	for(int dy=-1;dy<=1;dy++){
       if(dx!=0&&dy!=0){continue;}
		if(dx==dy&&dy==0){continue;}
      int nx=x+dx,ny=y+dy; 
		if(0<=nx&&nx<12&&0<=ny&&ny<12){
		if(grid[nx][ny]=='1'){dfs(nx,ny);}
		}
	}
	
}		
return ;
}
int main(){
  
while(cin>>grid[0][0])
{
for(int i=0;i<12;i++)
{
for(int j=0;j<12;j++){
if(i==0&&j==0){continue;}
cin>>grid[j][i];
}
}
int ret=0;
for(int j=0;j<12;j++){
	for(int i=0;i<12;i++){
	  	if(grid[j][i]=='1'){
			dfs(j,i);
			ret++;
		}
	}
}
cout<<ret<<endl;

}
return 0;
}
