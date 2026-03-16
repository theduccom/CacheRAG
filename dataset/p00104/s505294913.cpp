#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

const int dy[4]={-1,0,1,0},dx[4]={0,1,0,-1};

int main(){
	int H,W;
	while(cin>>H>>W,H||W){
		char fld[101][101];
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>fld[i][j];
			}
		}
		int y=0,x=0;
		bool used[101][101]={},loop=false;
		while(true){
			if(used[y][x]==true){
				loop = true; break;
			}
			used[y][x] = true;
			char c = fld[y][x];
			int dir;
			if(c=='^') dir = 0;
			else if(c=='>') dir = 1;
			else if(c=='v') dir = 2;
			else if(c=='<') dir = 3;
			else break;
			y += dy[dir]; x += dx[dir];
		}
		if(loop==true) puts("LOOP");
		else printf("%d %d\n",x,y);
	}
    return 0;
}