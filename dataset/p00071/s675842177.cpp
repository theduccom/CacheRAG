#include<iostream>
using namespace std;

char field[8][8];
int sx, sy;

void dfs(int x, int y){
	if(0 <= x && x < 8 && 0 <= y && y < 8){
		field[x][y] = '0';
		for(int i=1; i <= 3; i++){
			if(field[x][y+i] == '1') dfs(x, y+i);
			if(field[x][y-i] == '1') dfs(x, y-i);
			if(field[x+i][y] == '1') dfs(x+i, y);
			if(field[x-i][y] == '1') dfs(x-i, y);
		}
	}
}

int main(){
	int n;
	cin >> n;

	for(int l=0; l < n; l++){
		for(int i=0; i < 8; i++){
			for(int j=0; j < 8; j++){
				cin >> field[i][j];
			}
		}
		cin >> sx >> sy;

		dfs(sy-1, sx-1);

		cout << "Data " << l+1 << ":" << endl;
		for(int i=0; i < 8; i++){
			for(int j=0; j < 8; j++){
				cout << field[i][j];
			}
			cout << endl;
		}
	}
}