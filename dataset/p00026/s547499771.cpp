#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int map[10][10]={};
	int x,y,s,nx,ny;
	int dx1[]={-1,0,0,0,1};
	int dy1[]={0,-1,0,1,0};
	int dx2[]={-1,-1,-1,0,0,0,1,1,1};
	int dy2[]={-1,0,1,-1,0,1,-1,0,1};
	int dx3[]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
	int dy3[]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
	char c;
	while(cin>>x>>c>>y>>c>>s){
		if(cin.eof())break;
		if(s==1){
			for(int i=0;i<5;i++){
				nx=x+dx1[i];
				ny=y+dy1[i];
				if(0<=nx&&nx<10&&0<=ny&&ny<10)map[nx][ny]++;
			}
		}else if(s==2){
			for(int i=0;i<9;i++){
				nx=x+dx2[i];
				ny=y+dy2[i];
				if(0<=nx&&nx<10&&0<=ny&&ny<10)map[nx][ny]++;
			}
		}else{
			for(int i=0;i<13;i++){
				nx=x+dx3[i];
				ny=y+dy3[i];
				if(0<=nx&&nx<10&&0<=ny&&ny<10)map[nx][ny]++;
			}
		}
	}
	int res=0,m=0;
	for(int i=0;i<10;i++)for(int j=0;j<10;j++)if(!map[i][j])res++;else if(map[i][j]>m)m=map[i][j];
	printf("%d\n%d\n",res,m);
    return 0;
}