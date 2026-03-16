#include<iostream>
using namespace std;
#define MAX_H 100
#define MAX_W 100
#define INF 1000;
int h,w;
int field[MAX_H+1][MAX_W+1];
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
void dfs(int y,int x,const int sc){
	if(y<=0 || x<=0 || y>h || x>w)return;
	if(field[y][x]==sc){
		field[y][x]=0;
		for(int i=0;i<4;i++)dfs(y+dy[i],x+dx[i],sc);
	}
	return;
}
int main(){
	int sx,sy,gx,gy,n;
	while(cin>>w>>h){
        if(!w && !h)break;
		cin>>sx>>sy>>gx>>gy>>n;
		for(int i=0;i<MAX_H;i++){
			for(int j=0;j<MAX_W;j++){
					field[i][j]=INF;
				}
		}
		while(n--){
			int c,d,x,y;
			cin>>c>>d>>x>>y;
			for(int i=0;i<2;i++){
				for(int j=0;j<4;j++){
					if(d)field[y+j][x+i]=c;
					else field[y+i][x+j]=c;
				}
			}
		}
		dfs(sy,sx,field[sy][sx]);
		if(field[gy][gx])cout<<"NG"<<endl;
		else cout<<"OK"<<endl;

	}
	return 0;
}