#include<iostream>
#include<map>

int field[102][102];//y,x
bool flag;
int sx,sy,gx,gy,col;
std::map<int, bool> memo;

void erase(){
	for(int i=0; i<102; i++)
		for(int j=0; j<102; j++)
			field[i][j] = 0;
}

void DFS(int x, int y){
	if(field[y][x] != col || memo[1000*x+y])
		return;
	if(x == gx && y == gy){
		flag = true;
		return;
	}
	memo[1000*x+y] = true;
	DFS(x+1, y);
	if(flag)
		return;
	DFS(x, y+1);
	if(flag)
		return;
	DFS(x-1, y);
	if(flag)
		return;
	DFS(x, y-1);
}

int main(){
	int n,c,d,bx,by;
	while(true){
		flag = false;
		erase();
		memo.clear();

		std::cin >> c >> d;
		if(!c && !d)
			return 0;

		std::cin >> sx >> sy;
		std::cin >> gx >> gy;

		std::cin >> n;
		for(int i=0; i<n; i++){
			std::cin >> c >> d >> bx >> by;
			if(d==0)
				for(int h=by; h<by+2; h++)
					for(int w=bx; w<bx+4; w++)
						field[h][w] = c;
			else
				for(int h=by; h<by+4; h++)
					for(int w=bx; w<bx+2; w++)
						field[h][w] = c;
		}

		col = field[gy][gx];
		DFS(sx, sy);
		if(flag)
			std::cout << "OK\n";
		else
			std::cout << "NG\n";
	}
}