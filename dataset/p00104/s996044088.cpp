#include <iostream>

using namespace std;

int main()
{
	int h, w;
	
	while (cin >> h >> w,h || w){
		int map = h * w;
		char f[101][101];
		for (int i = 0; i < h; i++){
			cin >> f[i];
		}
		h = w = 0;
		while (map){
			if (f[h][w] == '>'){
				w++;
			}
			else if (f[h][w] == '<'){
				w--;
			}
			else if (f[h][w] == '^'){
				h--;
			}
			else if (f[h][w] == 'v'){
				h++;
			}
			else if (f[h][w] == '.'){
				break;
			}
			map--;
		}
		if (map == 0){
			cout << "LOOP" << endl;
		}
		else {
			cout << w << ' ' << h << endl;
		}
	}
	
	return (0);
}