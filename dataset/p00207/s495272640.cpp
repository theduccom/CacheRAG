#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int w,h;
int xs,ys;
int xg,yg;
int n;
int map[101][101];
bool ch;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int x,int y,int c){
	if(x==xg && y==yg)ch=true;
	else if(ch==false){
		map[x][y]=-1;
		for(int i=0;i<4;i++){
			int cx=x+dx[i],cy=y+dy[i];
			if(cx>=1 && cx<=w && cy>=1 && cy<=h  && map[cx][cy]==c)dfs(cx,cy,c);
		}
	}
}

int main(void){
	while(1){
		ch=false;
		memset(map,0,sizeof(map));
		cin >> w >> h;
		if(w==0 && h==0)break;
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;
		for(int i=0;i<n;i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			if(d==0){
				for(int i=y;i<y+2;i++){
					for(int j=x;j<x+4;j++){
						map[j][i]=c;
					}
				}
			}
			if(d==1){
				for(int i=y;i<y+4;i++){
					for(int j=x;j<x+2;j++){
						map[j][i]=c;
					}
				}
			}
		}
		if(map[xs][ys]>=1)dfs(xs,ys,map[xs][ys]);
		if(ch)cout << "OK" << endl;
		else cout << "NG" << endl;
	}
    return 0;
}