#include <iostream>
#include <vector>
using namespace std;
int main(){
	int H, W;
	while (cin >> H, cin >> W, !(H == 0 && W == 0)){
		struct Locate{
			int x;
			int y;
		};
		vector<vector<char>> map;
		vector<vector<bool>> loop_flag;
		Locate pos;
		pos.x = 0;
		pos.y = 0;
		map.resize(H);
		loop_flag.resize(H);
		for (int i = 0; i < H; i++){
			map[i].resize(W);
			loop_flag[i].resize(W);
			for (int j = 0; j < W; j++){
				cin >> map[i][j];
				loop_flag[i][j] = false;
			}
		}
		bool eflag = false;
		while (!eflag){
			if (loop_flag[pos.y][pos.x] == false){
				loop_flag[pos.y][pos.x] = true;
			}
			else{
				cout << "LOOP\n";
				eflag = true;
				continue;
			}
			if (map[pos.y][pos.x] == '>'){

				pos.x += 1;
			}
			else if (map[pos.y][pos.x] == 'v'){
				pos.y += 1;
			}
			else if (map[pos.y][pos.x] == '^'){
				pos.y -= 1;
			}
			else if (map[pos.y][pos.x] == '<'){
				pos.x -= 1;
			}
			else if (map[pos.y][pos.x] == '.'){
				eflag = true;
				cout << pos.x << " " << pos.y << "\n";
			}
		}
	}
}