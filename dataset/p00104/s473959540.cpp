#include <iostream>

using namespace std;

int main()
{
	int h, w;
	char map[101][101];
	
	while (cin >> h >> w, h * w){
		int x = 0, y = 0;
		bool check[101][101];
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> map[i][j];
				check[i][j] = false;
			}
		}
		
		while (map[y][x] != '.'){
			if (check[y][x])	break;
			check[y][x] = true;
			if (map[y][x] == '>')	x++;
			else if (map[y][x] == '<')	x--;
			else if (map[y][x] == '^')	y--;
			else if (map[y][x] == 'v')	y++;
		}
		if (check[y][x])	cout << "LOOP";
		else cout << x << ' ' << y;
		cout << endl;
	}
	return (0);
}