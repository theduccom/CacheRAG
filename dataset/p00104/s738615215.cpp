#include <iostream>
#include <cstdio>

using namespace std;

int H, W;

int ans_x, ans_y;

string str[500];

bool map[500][500];

bool search(int x, int y){
	if(x < 0 || x >= W || y < 0 || y >= H){
		return false;
	}
	
	if(map[y][x]){
		return false;
	}
	
	map[y][x] = true;
	
	if(str[y][x] == '.'){
		ans_x = x;
		ans_y = y;
		return true;
	}else if(str[y][x] == '^'){
		return search(x, y - 1);
	}else if(str[y][x] == 'v'){
		return search(x, y + 1);
	}else if(str[y][x] == '<'){
		return search(x - 1, y);
	}else if(str[y][x] == '>'){
		return search(x + 1, y);
	}
}

int main(){
	
	cin >> H >> W;
	
	while(H != 0 || W != 0){
		
		for(int i = 0; i < H; i++){
			cin >> str[i];
		}
		
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				map[i][j] = false;
			}
		}
		
		if(search(0,0)){
			printf("%d %d\n", ans_x, ans_y);
		}else{
			printf("LOOP\n");
		}
		
		cin >> H >> W;
	}
	
	return 0;
}