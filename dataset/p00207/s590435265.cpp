#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int show=0;
int w,h,sx,sy,gx,gy,d[101][101],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1},C;
int field[101][101];
const int INF=9999999;
typedef pair<int,int> P;

void bfs(){
	queue<P> que;
	for(int i=1;i<=h;i++)for(int j=1;j<=w;j++)d[i][j]=INF;
	que.push(P(sy,sx));
	d[sy][sx]=0;
	while(!que.empty()){
		P p=que.front(); que.pop();
		if(p.first==gy&&p.second==gx)break;
		for(int i=0;i<4;i++){
			int ny=p.first+dy[i],nx=p.second+dx[i];
			if(1<=ny&&ny<=h&&1<=nx&&nx<=w&&field[ny][nx]==C&&d[ny][nx]==INF){
			que.push(P(ny,nx));
			d[ny][nx]=d[p.first][p.second]+1;
			}
		}
	}
	if(d[gy][gx]==INF)cout<<"NG"<<endl;
	else cout<<"OK"<<endl;
}

int main() {
	while(cin>>w>>h){
		if(!h)return 0;
		int n,c,di,x,y;
		cin>>sx>>sy>>gx>>gy>>n;
		for(int i=1;i<=h;i++)for(int j=1;j<=w;j++)field[i][j]=0;
		for(int i=0;i<n;i++){
			cin>>c>>di>>x>>y;
			for(int j=y;j<y+2+di*2;j++)for(int k=x;k<x+2+!di*2;k++)field[j][k]=c;
		}
		C=field[sy][sx];
		if(!C)cout<<"NG"<<endl;
		else bfs();
		if(show){
			for(int i=1;i<=h;i++){for(int j=1;j<=w;j++){if(field[i][j])cout<<field[i][j];else cout<<" ";}cout<<endl;}
			for(int i=1;i<=h;i++){for(int j=1;j<=w;j++){if(d[i][j]<INF)cout<<d[i][j]<<" ";else cout<<"  ";}cout<<endl;}
		}
	}
}