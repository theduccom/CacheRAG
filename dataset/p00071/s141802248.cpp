#include<iostream>
#include<string>

using namespace std;

void dfs(int x,int y);

string data[8];

int main(){
	int n;
	int x,y;
	
	cin >> n;
	
	for(int d=1;d<=n;++d){
		for(int i=0;i<8;++i){
			cin >> data[i];
		}
		
		cin >> x;
		cin >> y;
		
		--x;
		--y;
		data[y][x] = '0';
		
		dfs(x,y);
		
		cout << "Data " << d << ":" << endl;
		
		for(int i=0;i<8;++i){
			cout << data[i] << endl;
		}
	}
}

void dfs(int x,int y){
	int nx,ny;
	for(int i=-3;i<=3;++i){
		if(x+i >= 0 && x+i < 8)nx = x+i;
		else nx = x;
		if(y+i >= 0 && y+i < 8)ny = y+i;
		else ny = y;

		if(i==0)continue;
		if(data[y][nx] == '1'){
			data[y][nx] = '0';
			dfs(nx,y);
		}
		if(data[ny][x] == '1'){
			data[ny][x] = '0';
			dfs(x,ny);
		}
	}
}