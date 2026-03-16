#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
#include<cstring>
using namespace std;
#define LATTE 10000

const int dy[4]={-1,0,1,0},dx[4]={0,1,0,-1};

void dfs(char fld[][8],int x,int y){
	int ny,nx;
	for(int i=0;i<4;i++){
		for(int j=1;j<=3;j++){
			ny = y+dy[i]*j;
			nx = x+dx[i]*j;
			if(ny<0 || 8<=ny || nx<0 || 8<=nx || fld[ny][nx]!='1') continue;
			fld[ny][nx]='0';
			dfs(fld,nx,ny);
		}
	}
}

int main(){
	int N;
	cin>>N;
	for(int tc=1;tc<=N;tc++){
		int X,Y;
		char fld[8][8];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>fld[i][j];
			}
		}
		cin>>X>>Y;
		fld[--Y][--X]='0';
		dfs(fld,X,Y);
		printf("Data %d:\n",tc);
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				printf("%c",fld[i][j]);
			}puts("");
		}
	}
    return 0;
}