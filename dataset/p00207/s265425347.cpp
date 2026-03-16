#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
using namespace std;
int field[128][128];
bool memo[128][128];
int w,h;
void func(int x,int y,int c){
	if(x < 1 || y < 1 || x > w || y > h)return;
	if(memo[y][x])return ;
	if(field[y][x] != c)return ;
	memo[y][x] = 1;
	func(x-1,y,c);
	func(x+1,y,c);
	func(x,y+1,c);
	func(x,y-1,c);
	return ;
}
int main(){
	while(scanf("%d%d",&w,&h),w,h){
		int xs,ys,xg,yg,n;
		memset(field,0,sizeof(field));
		memset(memo,0,sizeof(memo));
		scanf("%d%d%d%d%d",&xs,&ys,&xg,&yg,&n);
		for(int i = 0; i < n; i++){
			int c,d,x,y;
			scanf("%d%d%d%d",&c,&d,&x,&y);
			if(d == 0){
				for(int j = x; j < x + 4; j++){
					field[y][j] = c;
					field[y+1][j] = c;
				}
			}
			else{
				for(int j = y; j < y + 4; j++){
					field[j][x] = c;
					field[j][x+1] = c;
				}
			}
		}
		func(xs,ys,field[ys][xs]);
		cout << (memo[yg][xg]?"OK":"NG") << endl;
	}
	return 0;
}