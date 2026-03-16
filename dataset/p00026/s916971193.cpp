#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int board[10][10]={0};
	fill(board[0], board[0] + 10 * 10, 0);
	const int INK[3][14][2] = {
		{{6},{0,-1},{-1,0},{0,0},{1,0},{0,1}},
		{{10},{-1,-1},{0,-1},{1,-1},{-1,0},{0,0},{1,0},{-1,1},{0,1},{1,1}},
		{{14},{0,-2},{-1,-1},{0,-1},{1,-1},{-2,0},{-1,0},{0,0},{1,0},{2,0},{-1,1},{0,1},{1,1},{0,2}}
	};
	int x,y,ink;
	int max = 0;
	int count = 100;
	while(scanf("%d,%d,%d",&x,&y,&ink)!=EOF){
		for(int i=1;i<INK[ink-1][0][0];++i){
			int dx = x + INK[ink-1][i][0];
			int dy = y + INK[ink-1][i][1];
			if(!(dx<0||dy<0||dx>9||dy>9)){
				if(board[dx][dy]==0)--count;
				++board[dx][dy];
				if(board[dx][dy]>max)max = board[dx][dy];
			}
		}
		/*debug
		for(int i=0;i<10;++i){
			for(int j=0;j<10;++j) cout << board[i][j] << " ";
			cout << "\n";
		}*/
	}
	cout << count << "\n" << max << "\n";
	return 0;
}