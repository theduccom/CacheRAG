#include<iostream>
using namespace std;

int board[10][10];

void small(int x, int y){
	board[x][y]++;
	if(x>=1) board[x-1][y]++;
	if(x<=8) board[x+1][y]++;
	if(y>=1) board[x][y-1]++;
	if(y<=8) board[x][y+1]++;
}

void middle(int x, int y){
	small(x, y);
	if(x>=1 && y>=1) board[x-1][y-1]++;
	if(x>=1 && y<=8) board[x-1][y+1]++;
	if(x<=8 && y>=1) board[x+1][y-1]++;
	if(x<=8 && y<=8) board[x+1][y+1]++;
}

void large(int x, int y){
	middle(x, y);
	if(x>=2) board[x-2][y]++;
	if(x<=7) board[x+2][y]++;
	if(y>=2) board[x][y-2]++;
	if(y<=7) board[x][y+2]++;
}

int main(void){
	
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			board[i][j] = 0;

	int x, y, size;
	char c1, c2;

	while(cin >> x >> c1 >> y >> c2 >> size){
		switch(size){
		case 1:
			small(x, y);
			break;
		case 2:
			middle(x, y);
			break;
		case 3:
			large(x, y);
			break;
		}
	}

	int max = 0;
	int count = 0;

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(board[i][j] > max) max = board[i][j];
			if(board[i][j] == 0) count++;
		}
	}

	cout << count << endl << max << endl;

	return 0;
}