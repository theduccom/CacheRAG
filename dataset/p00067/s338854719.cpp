#include<iostream>
#include<algorithm>
using namespace std;
char  ta[50][50];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

	void dfs(int y,int x){
		ta[y][x]='0';
		int ny=0,nx=0;
		for(int i=0;i<4;i++){
			ny=y+dy[i],nx=x+dx[i];
			if(ta[ny][nx]=='1')dfs(ny,nx);
		}
	}

int main(){
	while(1){
	for(int i=0;i<50;i++)for(int j=0;j<50;j++)ta[i][j]='0';
	
	for(int i=1;i<13;i++){
	for(int j=1;j<13;j++){
	if(cin>>ta[i][j]);
	else return 0;
	}
	}
	int cnt=0;
	for(int i=1;i<13;i++){
		for(int j=1;j<13;j++){
			if(ta[i][j]=='1'){dfs(i,j);cnt++;}
		}
	}
	cout<<cnt<<endl;
	}
	
	return 0;
}