#include <iostream>
using namespace std;

char m[8][8];
void figure(int, int);

int main() {

	while(1) {
		bool f = true;
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				cin >> m[i][j];
				if(cin.eof()) {
					return 0;
				}
			}
		}
		for(int i = 0; i < 8; i++) {
			for(int j = 0; j < 8; j++) {
				if(m[i][j] == '1') {
					figure(i, j);
					f = false;
					break;
				}
			}
			if(!f) {
				break;
			}
		}
	}
}


void figure(int i, int j) {
	char s;
	if(m[i][j+1] == '1' && m[i+1][j+1]== '1' && m[i+1][j]== '1') {
		s = 'A';
	}
	else if(m[i+1][j] == '1' && m[i+2][j] == '1') {
		s = 'B';
	}
	else if(m[i][j+1] == '1' && m[i][j+2] == '1') {
		s = 'C';
	}
	else if(m[i][j+1] == '1' && m[i+1][j+1] == '1') {
		s = 'E';
	}
	else if(m[i][j+1] == '1') {
		s = 'G';
	}
	else if(m[i+1][j+1] == '1') {
		s = 'F';
	}
	else {
		s = 'D';
	}
	cout << s << endl;
}