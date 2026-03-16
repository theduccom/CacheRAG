#include<iostream>

using namespace std;

int main()
{
	int W, H;
	char field[100][100];
	bool passed[100][100];
	while(1)
	{
		cin >> H >> W;
		if(H == 0 && W == 0) break;
		for(int y = 0;y < H;y++)
		{
			for(int x = 0;x < W;x++)
			{
				cin >> field[y][x];
				passed[y][x] = false;
			}
		}
		
		int cx = 0, cy = 0;
		bool loop = false;
		while(1)
		{
			int dx = 0, dy = 0;
			char cell = field[cy][cx];
			if(passed[cy][cx])
			{
				loop = true;
				break;
			}
			else if(cell == '>') dx++;
			else if(cell == '<') dx--;
			else if(cell == '^') dy--;
			else if(cell == 'v') dy++;
			else if(cell == '.') break;
			passed[cy][cx] = true;
			cx += dx;
			cy += dy;
		}
		if(loop) cout << "LOOP" << endl;
		else cout << cx << ' ' << cy << endl;
	}
	return 0;
}