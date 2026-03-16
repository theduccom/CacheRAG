#include<iostream>
#include<cstdio>
#include<memory.h>
using namespace std;
int main()
{
	while (1){
		char map[101][101];
		bool flag[101][101];
		bool f = false;
		
		int h, w;
		cin >> h >> w;
		if (h == 0 && w == 0){
			return 0;
		}
		memset(flag, 0, sizeof(flag));
		for (int i = 0; i < h; i++){
			for (int i2 = 0; i2 < w; i2++){
				cin >> map[i][i2];
			}
		}
		int x, y;
		x = 0; y = 0;
		if (map[y][x] == '>'){
			x++;
		}
		if (map[y][x] == '<'){
			x--;
		}
		if (map[y][x] == '^'){
			y--;
		}
		if (map[y][x] == 'v'){
			y++;
		}

		while (map[y][x] != '.'){
			if (flag[y][x] == true){
				cout << "LOOP" << endl;
				f = true;
				break;
			}
			if (map[y][x] == '>'){
				flag[y][x] = true;
				x++;
			}
			else if (map[y][x] == '<'){
				flag[y][x] = true;
				x--;
			}
			else if (map[y][x] == '^'){
				flag[y][x] = true;
				y--;
			}
			else if (map[y][x] == 'v'){
				flag[y][x] = true;
				y++;
			}

		}
		if (!f){
			cout << x << " " << y << endl;
		}
	}
}