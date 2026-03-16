#include <iostream>

using namespace std;

void explode(char board[][9], int x, int y)
{
	board[y][x] = '0';
	
	for (int i=3; i>0; i--) {
		if (x-i<0) break;
		if (board[y][x-i] != '0') explode(board, x-i, y);
	}
	for (int i=1; i<=3; i++) {
		if (x+i>=8) break;
		if (board[y][x+i] != '0') explode(board, x+i, y);
	}
	for (int i=3; i>0; i--) {
		if (y-i<0) break;
		if (board[y-i][x] != '0') explode(board, x, y-i);
	}
	for (int i=1; i<=3; i++) {
		if (y+i>=8) break;
		if (board[y+i][x] != '0') explode(board, x, y+i);
	}
}

void show(char board[][9])
{
	for (int i=0; i<8; i++) cout << board[i] << endl;
}

int main()
{
	int data_set_n;
	cin >> data_set_n;
	
	for (int k=0; k<data_set_n; k++) {
		char board[8][9];
		int init_x, init_y;
		for (int i=0; i<8; i++) cin >> board[i];
		cin >> init_x >> init_y;
		explode(board, init_x - 1, init_y - 1);
		cout << "Data " << k+1 << ":" << endl;
		show(board);
	}
	
	return 0;
}