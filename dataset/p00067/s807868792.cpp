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

int field[12][13],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char c;

void sink(int x,int y){
	field[y][x]=0;
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=0&&nx<12&&ny>=0&&ny<12&&field[ny][nx]==1)sink(nx,ny);
	}
}

int main(){
	while(cin>>c){
		field[0][0]=c-'0';
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(i+j!=0){cin>>c;field[i][j]=c-'0';}
			}
		}
		int ans=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(field[i][j]==1){ans++;sink(j,i);}
			}
		}
		cout<<ans<<endl;
	}
}