#include <iostream>

using namespace std;

int main() {

	int w, h;

	while(cin >> w >> h) {
		if(!w&&!h) {
			break;
		}
		char s[100][100];
		for(int i=0; i<w; i++) {
			for(int j=0; j<h; j++) {
				cin >> s[i][j];
			}
		}
		int c=0, x=0, y=0;
		while(c<w*h) {
			(s[x][y]=='>') && y++;
			(s[x][y]=='<') && y--;
			(s[x][y]=='^') && x--;
			(s[x][y]=='v') && x++;
			if(s[x][y]=='.') {
				break;
			}
			c++;
		}
		if(c!=w*h) {
			cout << y << " " << x << endl;
		}
		else {
			cout << "LOOP" << endl;
		}
	}

	return 0;

}