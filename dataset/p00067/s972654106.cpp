#include <bits/stdc++.h>
using namespace std;

string island[12];
bool c[12][12];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int cnt;

void dfs(int px , int py){
	c[px][py]=true;
	for(int i=0;i<4;++i){
		int tx=px+dx[i];
		int ty=py+dy[i];
		if(tx>=12||ty>=12||tx<0||ty<0) continue;
		if(island[ty][tx]=='0') continue;
		if(c[tx][ty]==true) continue;
		dfs(tx,ty);
	}
} 

int main(){
	while(cin >> island[0]){
		for(int i=1;i<12;++i){
			cin >> island[i];
		}
		for(int j=0;j<12;++j){
			for(int i=0;i<12;++i){
				c[i][j]=false;
			}
		}
		cnt=0;
		for(int j=0;j<12;++j){
			for(int i=0;i<12;++i){
				if(island[j][i]=='1' && c[i][j]==false){
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}