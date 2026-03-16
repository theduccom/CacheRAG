#include<iostream>
#include<algorithm>
using namespace std;
int board[101][101];
int h,w;
int xs,ys,xg,yg;
int n;

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool search(int c,int y,int x){
	if(y<1||h<y||x<1||w<x||c!=board[y][x])return false;
	if(y==yg&&x==xg)return true;
	board[y][x]=0;
	for(int i=0;i<4;i++)
		if(search(c,y+dy[i],x+dx[i]))return true;
	return false;
}
int main(){
	while(cin>>w>>h,w|h){
		int c,d,x,y;
		cin>>xs>>ys>>xg>>yg>>n;
		fill_n((int*)board,sizeof(board)/sizeof(int),0);
		for(int i=0;i<n;i++){
			cin>>c>>d>>x>>y;
			int dx=2,dy=2;
			if(d==0)dx=4;
			else dy=4;
			for(int i=0;i<dy;i++)
				for(int j=0;j<dx;j++)
					board[y+i][x+j]=c;
		}
		if(board[ys][xs]!=0 && board[yg][xg]!=0 && search(board[ys][xs],ys,xs))cout<<"OK\n";
		else cout<<"NG\n";
	}
}