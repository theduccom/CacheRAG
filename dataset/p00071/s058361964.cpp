#include <iostream>
int map[14][14];
void dfs(int x, int y){
	map[y][x] = 0;
	int vx[] = {-1, 0, 0, 1}, vy[] = {0, -1, 1, 0};
	for(int i=0;i<4;i++){
		for(int j=1;j<=3;j++){
			if(map[y+vy[i]*j][x+vx[i]*j] == 1)
				dfs(x+vx[i]*j, y+vy[i]*j);
		}
	}
	return;
}
int main(){
	int n;
	std::cin >> n;
	for(int c=1;c<=n;c++){
		for(int i=0;i<14*14;i++){
			map[i/14][i%14] = 0;
		}
		for(int i=0;i<8;i++){
			std::string s;
			std::cin >> s;
			for(int j=0;j<8;j++)
				map[i+3][j+3] = s[j] - '0';
		}
		int sx, sy;
		std::cin >> sx >> sy;
		dfs(sx-1+3, sy-1+3);
		std::cout << "Data " << c << ":\n";
		for(int i=0+3;i<14-3;i++){
			for(int j=0+3;j<14-3;j++)
				std::cout << map[i][j];
			std::cout << "\n";
		}
	}
}