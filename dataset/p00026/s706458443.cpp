#include <iostream>
#define N 10
using namespace std;
int main(){
	int field[N][N] = {0};
	int x1[4] = {1, 0, -1, 0};
	int y1[4] = {0, 1, 0, -1};
	int x2[8] = {1, 1, 0, -1, -1, -1, 0, 1};
	int y2[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	//3 is twice of 1 and 2
	int x, y, size;
	char c;
	while(cin >> x >> c >> y >> c >> size){
		field[y][x]++;
		if(size == 1){
			for(int i = 0; i < 4; i++){
				if(0 <= x+x1[i] && x+x1[i] < 10 && 0 <= y+y1[i] && y+y1[i] < 10) field[y+y1[i]][x+x1[i]]++;
			}
		}else{//2 3
			for(int i = 0; i < 8; i++){
				if(0 <= x+x2[i] && x+x2[i] < 10 && 0 <= y+y2[i] && y+y2[i] < 10) field[y+y2[i]][x+x2[i]]++;
			}
			if(size == 3){
				for(int i = 0; i < 4; i++){
					if(0 <= x+x1[i]*2 && x+x1[i]*2 < 10 && 0 <= y+y1[i]*2 && y+y1[i]*2 < 10) field[y+y1[i]*2][x+x1[i]*2]++;
				}
			}
		}
	}
	int white = 0, maxp = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(field[i][j] == 0) white ++;
			if(field[i][j] > maxp) maxp = field[i][j];
		}
	}
	cout << white << endl << maxp << endl;
	return 0;
}