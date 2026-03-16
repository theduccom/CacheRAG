#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int h=12;
const int w=12;

string field[12];
bool passed[12][12];
int cnt;

const int dy[]={-1,0,0,1};
const int dx[]={0,-1,1,0};

void dfs(int y,int x){
	if(passed[y][x]){
		return;
	}
	passed[y][x]=true;
	for(int i = 0; i < 4; i++){
		int nx,ny;
		nx=x+dx[i];
		ny=y+dy[i];
		if(nx>=0&&ny>=0&&nx<w&&ny<h&&!passed[ny][nx]&&field[ny][nx]!='0')
			dfs(ny,nx);
	}
}

int main(){

	while(1){
		cnt=0;
		for(int i = 0; i < h; i++){
			field[i].clear();
			if(cin.eof())
				return 0;
			cin>>field[i];
			for(int j = 0; j < w; j++)
				passed[i][j]=false;
		}
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(!passed[i][j]&&field[i][j]!='0'){
					cnt++;
					dfs(i,j);
				}
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}