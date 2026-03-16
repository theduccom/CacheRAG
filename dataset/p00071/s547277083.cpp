#include <iostream>
#include <utility>
using namespace std;

static const int margin = 3;
static const int board_size = 8;
char board[margin * 2 + board_size][margin * 2 + board_size];
pair<int, int> start;
int n;

void input_dataset() {
	for(int i = margin; i < margin + board_size; i++) {
		cin >> board[i] + margin;
	}
	cin >> start.second >> start.first;
	start.first += margin - 1;
	start.second += margin - 1;
}

void init() {
	for(int i = 0; i < margin * 2 + board_size; i++) {
		for(int j = 0; j < margin * 2 + board_size; j++) {
			board[i][j] = '0';
		}
	}
}

void solve(pair<int, int> p) {
	for(int i = 0; i < 3; i++) {
		if(board[p.first - (i + 1)][p.second] == '1') {
			board[p.first - (i + 1)][p.second] = '0';
			solve(pair<int, int>(p.first - (i + 1), p.second));
		}

		if(board[p.first + (i + 1)][p.second] == '1') {
			board[p.first + (i + 1)][p.second] = '0';
			solve(pair<int, int>(p.first + (i + 1), p.second));
		}

		if(board[p.first][p.second - (i + 1)] == '1') {
			board[p.first][p.second - (i + 1)] = '0';
			solve(pair<int, int>(p.first, p.second  - (i + 1)));
		}
		
		if(board[p.first][p.second+ (i + 1)] == '1') {
			board[p.first][p.second + (i + 1)] = '0';
			solve(pair<int, int>(p.first, p.second + (i + 1)));
		}
	}
}

void print_board() {
	for(int i = margin; i < board_size + margin; i++) {
		for(int j = margin; j < board_size + margin; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		init();
		input_dataset();
		board[start.first][start.second] = '0';
		solve(start);
		cout << "Data " << i + 1 << ":" << endl;
		print_board();
	}
}