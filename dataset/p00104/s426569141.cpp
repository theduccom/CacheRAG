#include <cstdio>
#include <iostream>
using namespace std;

int H,W;

int main(void)
{
	while(cin >> H >> W, H && W){
		char room[101][102] = {};
		bool  fd[101][101] = {};
		for(int i = 0; i < H; i++)
			cin >> room[i];

		int x = 0, y = 0;
		while(room[y][x] != '.' && !fd[y][x]){
			fd[y][x] = true;

			switch(room[y][x]){
				case '>':
					x++;
					break;
				case '^':
					y--;
					break;
				case '<':
					x--;
					break;
				case 'v':
					y++;
					break;
			}
		}
		if(room[y][x] == '.')
			cout << x << ' ' << y << endl;
		else
			cout << "LOOP" << endl;

	}


	return 0;
}