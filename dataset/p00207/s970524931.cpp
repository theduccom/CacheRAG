#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <queue>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <stack>
#include <list>
using namespace std;
#define INF 1000000000
typedef long long int lli;
typedef pair<int,int> P;

int block[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int w,h,xs,ys,xg,yg,n;
string ans;

void dfs(int x,int y,bool f[][101]){
	if(x==xg&&y==yg){
		ans="OK";
		return;
	}
	for(int i=0; i<4; ++i){
		int nx,ny;
		nx=x+dx[i];
		ny=y+dy[i];
		if(1<=nx&&nx<=w&&1<=ny&&ny<=h&&block[ny][nx]==block[ys][xs]&&!f[ny][nx]){
			f[ny][nx]=true;
			dfs(nx,ny,f);
			f[nx][ny]=false;
		}
	}
}

int main(){
	while(cin >> w >> h){
	if(w==0&&h==0) break;
		cin >> xs >> ys >> xg >> yg >> n;
		for(int i=1; i<=h; ++i){
			for(int j=1; j<=w; ++j){
				block[i][j]=0;
			}
		}
		for(int i=0; i<n; ++i){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			if(d==0){
				for(int j=0; j<2; ++j){
					for(int k=0; k<4; ++k){
						block[y+j][x+k]=c;
					}
				}
			} else if(d==1){
				for(int j=0; j<4; ++j){
					for(int k=0; k<2; ++k){
						block[y+j][x+k]=c;
					}
				}
			}
		}
		bool f[101][101];
		memset(f,0,sizeof(f));
		f[xs][ys]=true;
		ans="NG";
		dfs(xs,ys,f);
		cout << ans << "\n";
	}
}