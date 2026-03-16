#include <iostream>
#include <cstdio>
using namespace std;

int ary[10][10];
int dx[20]={0,1,0,-1,0,1,-1,-1,1,2,0,-2,0};
int dy[20]={0,0,1,0,-1,1,1,-1,-1,0,2,0,-2};
int main(){
	int x,y,s;

	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		for(int i=0;i<=s*4;i++){
			if(0<=x+dx[i]&&x+dx[i]<10&&0<=y+dy[i]&&y+dy[i]<10){
				ary[x+dx[i]][y+dy[i]]++;
			}
		}
	}
	int cnt=0,res=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(ary[i][j]==0) cnt++;
			res=max(res,ary[i][j]);
		}
	}
	cout<<cnt<<endl<<res<<endl;
	return 0;
}