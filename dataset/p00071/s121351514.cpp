#include<iostream>
#include<string>

#define COLS 8
#define ROWS 8

using namespace std;

void ExplodeBomb(int map[][COLS+6], int x, int y){
	int dij[] = {1,2,3,-1,-2,-3};
	
	if( map[y + 3][x + 3] == 0 ) return;
	map[y + 3][x + 3] = 0;

	for(int i = 0; i < sizeof(dij)/sizeof(*dij); i++){
		ExplodeBomb(map, x, y + dij[i]);
	}
	for(int j = 0; j < sizeof(dij)/sizeof(*dij); j++){
		ExplodeBomb(map, x + dij[j], y);
	}
}

int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		int map[ROWS+6][COLS+6] = {{0,},};
		char buf[32];
		string s;
		
		cin.getline(buf,sizeof(buf)/sizeof(*buf));
		for(int j = 0; j < ROWS; j++){
			cin >> s;
			for(unsigned int k = 0; k < s.length(); k++){
				if( s[k] == '1' ) map[j+3][k+3] = 1;
			}
		}
		cin >> x >> y;
		cin.ignore();

		ExplodeBomb( map, x - 1, y - 1 );

		cout << "Data " << i + 1 << ":\n";
		for(int j = 0; j < ROWS; j++){
			for(int k = 0; k < COLS; k++){
				cout << map[j + 3][k + 3]; 
			}
			cout << '\n';
		}

	}
	return 0;
}