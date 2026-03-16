#include <cstdio>
#include <cstring>

using namespace std;


// 0								1
// (0, 0) (1, 0) (2, 0) (3, 0)		(0, 0) (1, 0)
// (0, 1) (1, 1) (2, 1) (3, 1)		(0, 1) (1, 1)
//									(0, 2) (1, 2)
//									(0, 3) (1, 3)
const int dy[2][8] = {{0,0,0,0,1,1,1,1},{0,0,1,1,2,2,3,3}}, dx[2][8] = {{0,1,2,3,0,1,2,3},{0,1,0,1,0,1,0,1}};
const int ddy[4] = {-1,0,1,0}, ddx[4] = {0,1,0,-1};
int table[100][100];

void dfs(int x,int y,int w,int h){
	int now = table[y][x];
	table[y][x] = 0;
	for(int i = 0;i < 4;i++){
		if(x + ddx[i] >= 0 && x + ddx[i] < w && y + ddy[i] >= 0 && y + ddy[i] < h && table[y + ddy[i]][x + ddx[i]] != 0 && now == table[y + ddy[i]][x + ddx[i]]){
			dfs(x + ddx[i],y + ddy[i],w, h);
		}
	}
}


int main(void){
	int sx, sy, gx, gy, n, c, d, x, y, i, j, w, h;
	char ans[3];
	while(1){
		scanf("%d%d",&w,&h);
		if(w == 0 && h == 0){
			break;
		}
		strcpy(ans,"NG");
		scanf("%d%d%d%d%d",&sx,&sy,&gx,&gy,&n);
		sx--; sy--; gx--; gy--;
		memset(table,0,sizeof(table));
		for(i = 0;i < n;i++){
			scanf("%d%d%d%d",&c,&d,&x,&y);
			for(j = 0;j < 8;j++){
				table[y + dy[d][j] - 1][x + dx[d][j] - 1] = c;
			}
		}
/*		for(i = 0;i < h;i++){
			for(j = 0;j < w;j++){
				printf("%d ",table[i][j]);
			}
			printf("\n");
		}*/
		if(table[gy][gx] != 0){
			dfs(sx, sy, w, h);
			if(table[gy][gx] == 0){
				strcpy(ans,"OK");
			}
		}
		printf("%s\n",ans);
	}
	return 0;
}