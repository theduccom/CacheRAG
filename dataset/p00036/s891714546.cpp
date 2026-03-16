#include <iostream>
#include <string>
#define rep(i, a, n) for(int i = a;i < n;i++)
using namespace std;


int tile[8][8];


void input(string& s){
	rep(i, 0, 8) tile[0][i] = (s[i] - '0');
	rep(i, 1, 8){
		cin >> s;
		rep(j, 0, 8)
			tile[i][j] = (s[j] - '0');
	}
}


bool A(int x, int y){
	if(x+1 > 7) return false;
	if(!tile[y][x+1]) return false;
	if(y+1 > 7) return false;
	if(!tile[y+1][x]) return false;
	if(!tile[y+1][x+1]) return false;
	return true;
}


bool B(int x, int y){
	if(y+1 > 7) return false;
	if(!tile[y+1][x]) return false;
	if(y+2 > 7) return false;
	if(!tile[y+2][x]) return false;
	if(y+3 > 7) return false;
	if(!tile[y+3][x]) return false;
	return true;
}


bool C(int x, int y){
	if(x+1 > 7) return false;
	if(!tile[y][x+1]) return false;
	if(x+2 > 7) return false;
	if(!tile[y][x+2]) return false;
	if(x+3 > 7) return false;
	if(!tile[y][x+3]) return false;
	return true;
}


bool D(int x, int y){
	if(y+1 > 7) return false;
	if(!tile[y+1][x]) return false;
	if(x-1 < 0) return false;
	if(!tile[y+1][x-1]) return false;
	if(y+2 > 7) return false;
	if(!tile[y+2][x-1]) return false;
	return true;
}


bool E(int x, int y){
	if(x+1 > 7) return false;
	if(!tile[y][x+1]) return false;
	if(y+1 > 7) return false;
	if(!tile[y+1][x+1]) return false;
	if(x+2 > 7) return false;
	if(!tile[y+1][x+2]) return false;
	return true;
}


bool F(int x, int y){
	if(y+1 > 7) return false;
	if(!tile[y+1][x]) return false;
	if(x+1 > 7) return false;
	if(!tile[y+1][x+1]) return false;
	if(y+2 > 7) return false;
	if(!tile[y+2][x+1]) return false;
	return true;
}


void startP(int& x, int& y){
	rep(i, 0, 8){
		rep(j, 0, 8){
			if(tile[i][j]){
				y = i;
				x = j;
				return;
			}
		}
	}
}


char solve(){
	int x, y;
	startP(x, y);
	if(A(x, y)) return 'A';
	if(B(x, y)) return 'B';
	if(C(x, y)) return 'C';
	if(D(x, y)) return 'D';
	if(E(x, y)) return 'E';
	if(F(x, y)) return 'F';
	return 'G';
}


int main(){
	string s;

	while(cin >> s){
		input(s);

		cout << solve() << endl;
	}

	return 0;
}