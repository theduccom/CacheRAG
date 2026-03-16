#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	while(true){
		int W, H;
		cin >> H >> W;
		if(H == 0 || W == 0){ break; }
		vector<string> field(H);
		for(int i = 0; i < H; ++i){ cin >> field[i]; }
		int x = 0, y = 0;
		while(field[y][x] != '.' && field[y][x] != ' '){
			int px = x, py = y;
			switch(field[y][x]){
				case '>': ++x; break;
				case '<': --x; break;
				case 'v': ++y; break;
				case '^': --y; break;
			}
			field[py][px] = ' ';
		}
		if(field[y][x] == ' '){
			cout << "LOOP" << endl;
		}else{
			cout << x << " " << y << endl;
		}
	}
	return 0;
}