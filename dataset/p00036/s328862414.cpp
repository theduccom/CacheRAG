#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define int long long
vector<vector<int>> map(8,vector<int>(8,0));
bool ch(int y, int x){
	if (0<=x&&x<8&&0<=y&&y<8) return map[y][x]==1;
	else return false;
}
signed main(){
	char buf[256];
	int sx,sy;
	while( scanf("%s", buf) != EOF ){
		for(int j = 0; j < 8; j++){
			if(buf[j] == '1') map[0][j] = 1;
			else map[0][j] = 0;
		}
		for(int i = 1; i < 8; i++){
			scanf("%s", buf);
			for(int j = 0; j < 8; j++){
				if(buf[j] == '1') map[i][j] = 1;
				else map[i][j] = 0;
			}
		}
		int sx=-1,sy=-1;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(map[i][j]==1){
					sx = j;
					sy = i;
					goto next;
				}
			}
		}
next:
		if(ch(sy,sx+1)&&ch(sy+1,sx)&&ch(sy+1,sx+1)) printf("A\n");
		else if(ch(sy+1,sx)&&ch(sy+2,sx)&&ch(sy+3,sx)) printf("B\n");
		else if(ch(sy,sx+1)&&ch(sy,sx+2)&&ch(sy,sx+3)) printf("C\n");
		else if(ch(sy+1,sx)&&ch(sy+1,sx-1)&&ch(sy+2,sx-1)) printf("D\n");
		else if(ch(sy,sx+1)&&ch(sy+1,sx+1)&&ch(sy+1,sx+2)) printf("E\n");
		else if(ch(sy+1,sx)&&ch(sy+1,sx+1)&&ch(sy+2,sx+1)) printf("F\n");
		else if(ch(sy,sx+1)&&ch(sy+1,sx)&&ch(sy+1,sx-1)) printf("G\n");
		else printf("error\n");
	}
	return 0;
}