#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int r, c;
	while(cin >> r >> c && (r || c)) {
		char board[110][110];
		bool b[110][110];
		rep(i,r) {
			rep(j,c) {
				b[i][j] = 0;
			}
		}

		rep(i,r) {
			string s;
			cin >> s;
			rep(j,c) {
				board[i][j] = s[j];
			}
		}
		
		char ch = board[0][0];
		int y = 0, x = 0;
		while(ch != '.' && !b[y][x]) {
			b[y][x] = 1;
			switch(ch) {
			case '>' : 
				x++;
				break;
			case '<' :
				x--;
				break;
			case '^' :   
				y--;
				break;
			case 'v' : 
				y++;
				break;
			default :
				break;
			}
			ch = board[y][x];
		}
		if(b[y][x]) cout << "LOOP" << endl;
		else cout << x << " " << y << endl;
	}
	return 0;
}