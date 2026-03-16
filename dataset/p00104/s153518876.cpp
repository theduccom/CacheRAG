#include <iostream>

int main(int argc, char **argv)
{
	int h, w;
	int x = 0, y = 0;
	char tiles[100][100];
	bool throughed[100][100] = {};
	bool loop = false;
	bool end = false;
	while(std::cin >> h >> w, h+w != 0){
		x = 0;
		y = 0;
		for(int i = 0; i < 100; i++){
			for(int j = 0; j < 100; j++){
				throughed[j][i] = false;
			}
		}
		loop = false;
		end = false;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				std::cin >> tiles[j][i];
			}
		}
		while(true){
			if(throughed[x][y]){
				loop = true;
				break;
			}
			throughed[x][y] = true;
			switch(tiles[x][y]){
				case '.':
					end = true;
					break;
				case '^':
					y--;
					break;
				case 'v':
					y++;
					break;
				case '<':
					x--;
					break;
				case '>':
					x++;
					break;
			}
			if(end){
				break;
			}
		}
		if(loop){
			std::cout << "LOOP" << std::endl;
		}else{
			std::cout << x << " " << y << std::endl;
		}
	}
	return 0;
}