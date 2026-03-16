#include <iostream>
#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int dc[3] = {5,9,13};
int dx[3][13] = {
	{0,0,0,-1,1},
	{-1,-1,-1,0,0,0,1,1,1},
	{-2,-1,-1,-1,0,0,0,0,0,1,1,1,2}
};
int dy[3][13] = {
	{0,1,-1,0,0},
	{-1,0,1,-1,0,1,-1,0,1},
	{0,-1,0,1,-2,-1,0,1,2,-1,0,1,0}
};

int main(){
	int a,b,c;
	int d[10][10] = {0};
	while(~scanf("%d,%d,%d",&a,&b,&c)){
		c--;
		rep(i,dc[c]){
			int tx = a + dx[c][i] , ty = b + dy[c][i];
			if(tx < 0 || ty < 0 || ty > 9 || tx > 9) continue;
			d[ty][tx]++;
		}
	}
	int white = 0;
	int ans = 0;
	rep(i,10)rep(j,10){
		if(d[i][j]==0)white++;
		else ans = max(d[i][j],ans);
	}
	cout << white << endl << ans << endl;
}