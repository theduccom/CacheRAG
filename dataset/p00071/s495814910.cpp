#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int N,sx,sy,field[8][9],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char c;

void bomb(int x,int y){
	field[y][x]=0;
	for(int i=0;i<4;i++){
		for(int j=1;j<4;j++){
			int nx=x+dx[i]*j,ny=y+dy[i]*j;
			if(nx>=0&&nx<8&&ny>=0&&ny<8&&field[ny][nx]==1)bomb(nx,ny);
		}
	}
}

int main(){
	cin>>N;
	for(int h=0;h<N;h++){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>c;
				field[i][j]=c-'0';
			}
		}
		cin>>sx>>sy;
		bomb(sx-1,sy-1);
		cout<<"Data "<<h+1<<":"<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<field[i][j];
			}
			cout<<endl;
		}
	}
}