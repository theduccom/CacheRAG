#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int H, W;
vector<string> tiles;
bool reached[110][110];

int main() {
	while (1) {
		cin >> H >> W; if (H == 0 && W == 0) break;
		
		tiles.assign(H, "");
		for (int i = 0; i < H; i++) {
			cin >> tiles[i];
		}
		
		memset(reached, 0, sizeof(reached));
		
		int x = 0, y = 0;
		bool loop = false;
		while (tiles[y][x] != '.') {
			if (reached[y][x]) {
				loop = true;
				break;
			}
			reached[y][x] = true;
			char t = tiles[y][x];
			
			if (t == '>') {
				x++;
			}
			if (t == '<') {
				x--;
			}
			if (t == '^') {
				y--;
			}
			if (t == 'v') {
				y++;
			}
		}
		
		if (loop) cout << "LOOP" << endl;
		else cout << x << " " << y << endl;
	}
	
	return 0;
}