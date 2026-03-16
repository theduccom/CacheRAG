#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to) 

int main() {
	int t[7][4][4] = {{{1, 1, 0, 0},
					   {1, 1, 0, 0},
					   {0, 0, 0, 0},
					   {0, 0, 0, 0}},

					  {{1, 0, 0, 0},
					   {1, 0, 0, 0},
					   {1, 0, 0, 0},
					   {1, 0, 0, 0}},

					  {{1, 1, 1, 1},
					   {0, 0, 0, 0},
					   {0, 0, 0, 0},
					   {0, 0, 0, 0}},
					  
					  {{0, 1, 0, 0},
			      	   {1, 1, 0, 0},
					   {1, 0, 0, 0},
					   {0, 0, 0, 0}},
					  
					  {{1, 1, 0, 0},
					   {0, 1, 1, 0},
					   {0, 0, 0, 0},
					   {0, 0, 0, 0}},
					  
					  {{1, 0, 0, 0},
					   {1, 1, 0, 0},
					   {0, 1, 0, 0},
					   {0, 0, 0, 0}},
					
				   	  {{0, 1, 1, 0},
				   	   {1, 1, 0, 0},
					   {0, 0, 0, 0},
					   {0, 0, 0, 0}}};
	string str;
	while(cin >> str) {
		vector<string> s(8);
		s[0] = str;
		int board[11][11];
		rep2(i,1,8) {
			cin >> s[i];
		}
		rep(i,11) {
			rep(j,11) {
				board[i][j] = 0;
			}
		}
		
		rep(i,8) {
			rep(j,8) {
				board[i][j] = s[i][j] - '0';
			}
		}
		rep(i,64) {
			bool f = 1;
			rep(k,7) {
				f = 1;
				rep(l,16) {
					if(board[i / 8 + l / 4][i % 8 + l % 4] != t[k][l / 4][l % 4]) {
						f = 0;
						break;
					}
				}
				if(f) {
					cout << (char) (k + 'A') << endl;
					break;
				}
			}
			if(f) break;
		}
	}
	return 0;
}