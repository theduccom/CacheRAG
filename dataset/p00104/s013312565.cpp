#include<iostream>

using namespace std;
int H, W;
int x = 0, y = 0;
int rog[100][100];
bool check(){
	if (rog[x][y] == 0){
		cout << "LOOP" << endl;
		return true;
	}
	
		return false;
	
}

int main(){
	char ma[100][100];

	while (cin >> H >> W,W+H){
		for (int i = 0; i < H; i++){
			for (int j = 0; j < W; j++){
				cin >> ma[j][i];
				rog[j][i] = 1;
			}
		}

		x = 0, y = 0;
		while (1){
			if (ma[x][y] == '>'){
				x++;
				if (check())break; 
			}
			else if(ma[x][y]=='v'){
				y++;
				if (check()) break; 
			}
			else if (ma[x][y] == '<'){
				x--;
				if (check()) break; 
			}
			else if (ma[x][y] == '^'){
				y--;
				if (check())break; 
			}
			else {
				cout << x << " " << y << endl;
				break;
			}
			
			rog[x][y] = 0;

		}
	}
}