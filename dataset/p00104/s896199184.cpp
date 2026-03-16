#include<iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> map;
	string tmp;
	int w, h;
	int i;

	while(true) {
		cin >> h >> w;
		if(w == 0 && h == 0) { break; }
		map.clear();
		for(i = 0; i < h; i++) {
			cin >> tmp;
			map.push_back( tmp );
		}
		w = 0;
		h = 0;
		while(true) {
			if(map[h][w] == '>') {
				map[h][w] = '*';
				w++;
			} else if(map[h][w] == 'v') {
				map[h][w] = '*';
				h++;
			} else if(map[h][w] == '<') {
				map[h][w] = '*';
				w--;
			} else if(map[h][w] == '^') {
				map[h][w] = '*';
				h--;
			} else if(map[h][w] == '.') {
				cout << w << " " << h << endl;
				break;
			} else {
				cout << "LOOP" << endl;
				break;
			}
		}
	}

	return 0;
}