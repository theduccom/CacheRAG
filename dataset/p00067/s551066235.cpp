#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
using namespace std;

const int dy[4]={-1,0,1,0},dx[4]={0,1,0,-1};
char fld[12][12];

void dfs(int y,int x){
	int ny,nx;
	for(int i=0;i<4;i++){
		ny = y+dy[i];
		nx = x+dx[i];
		if(ny<0 || 12<=ny || nx<0 || 12<=nx || fld[ny][nx]=='0') continue;
		fld[ny][nx]='0';
		dfs(ny,nx);
	}
}

int main(){
	while(cin>>fld[0][0]){
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(i==0 && j==0) continue;
				cin>>fld[i][j];
			}
		}
		int ans=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(fld[i][j]=='1'){
					fld[i][j]='0';
					dfs(i,j);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}