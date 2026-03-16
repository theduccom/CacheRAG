#include <iostream>

using namespace std;

bool input(char b[][8])
{
	char dummy;
	for (int i=0; i<8; i++) {
		for (int j=0; j<8; j++) {
			if ( !(cin >> b[i][j]) ) return false;
		}
		//cin >> dummy;
	}
	return true;
}

int main()
{
	char board[8][8];
	
	while ( input(board) ) {
		pair<int, int> block_pos[4];
		int found_cnt = 0;
		for (int i=0; i<8; i++) {
			for (int j=0; j<8; j++) {
				if (board[i][j] == '1') {
					block_pos[found_cnt].first  = i;
					block_pos[found_cnt].second = j;
					found_cnt++;
					if (found_cnt == 4) break;
				}
			}
		}
		
		if ( block_pos[0].first == block_pos[1].first ) {
			// current candidates : A,C,E,G
			if ( block_pos[0].second == block_pos[2].second ) cout << "A";
			// C,E,G
			else if ( block_pos[1].first == block_pos[2].first ) cout << "C";
			// E,G
			else if ( block_pos[1].second == block_pos[2].second ) cout << "E";
			// G
			else cout << "G";
		}
		// current candidates : B,D,F
		else if (block_pos[0].second != block_pos[1].second) cout << "D";
		else {
			// current candidates : B,F
			if ( block_pos[1].second == block_pos[2].second ) cout << "B";
			// F
			else cout << "F";
		}
		cout << endl;
	}
	
	return 0;
}