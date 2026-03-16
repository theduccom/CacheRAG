#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

const int dy[]={0,0,0,0,0,0,1,2,3,-1,-2,-3};
const int dx[]={-1,-2,-3,1,2,3,0,0,0,0,0,0};

string field[8];
int sx,sy;

void dfs(int x,int y){
	field[y][x]='0';
	for(int i = 0; i < 12; i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(ny>=0&&nx>=0&&ny<8&&nx<8&&field[ny][nx]=='1'){
			dfs(nx,ny);
		}
	}
}

int main(){

	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Data "<<1+i<<":"<<endl;
		for(int j = 0; j < 8; j++){
			field[j].clear();
			cin>>field[j];
		}
		cin>>sx>>sy;
		sx--;
		sy--;
		dfs(sx,sy);
		for(int j = 0; j < 8; j++){
			cout<<field[j]<<endl;
		}
	}

	return 0;
}