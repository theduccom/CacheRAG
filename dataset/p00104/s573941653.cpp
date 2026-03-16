#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,field[100][100],x,y,loop;
	char c[100][100];
	while (1){
		loop = 0;
		x = 0;
		y = 0;
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++) field[i][j] = 0;
		}
		cin >> a >> b;
		if (!a && !b) break;
		getchar();
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				c[i][j] = getchar();
			}
			getchar();
		}
		while (c[x][y] != '.'){
			if (field[x][y]) {
				loop = 1;
				break;
			}
			field[x][y] = 1;
			if (c[x][y] == '>') y++;
			if (c[x][y] == '^') x--;
			if (c[x][y] == '<') y--;
			if (c[x][y] == 'v') x++;
		}
		if (loop) cout << "LOOP" << endl;
		else cout << y << " " << x << endl;
	}
	return 0;
}