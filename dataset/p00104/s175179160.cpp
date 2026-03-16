#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

const char arrow[] = {'>', '<', 'v', '^'};
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int main(){
	int H, W;
	while(cin >> H >> W, H+W){
		vector<string> tile(H);
		bool visit[101][101] = {false};
		for(int i = 0; i < H; i++){
			cin >> tile[i];
		}
		int x = 0, y = 0;
		while(visit[y][x] != true){
			visit[y][x] = true;
			for(int i = 0; i < 4; i++){
				if(tile[y][x] == arrow[i]){
					x += dx[i];
					y += dy[i];
					break;
				}
			}
		}
		if(tile[y][x] == '.'){
			cout << x << ' ' << y << endl;
		}else{
			cout << "LOOP" << endl;
		}
	}

	return 0;
}