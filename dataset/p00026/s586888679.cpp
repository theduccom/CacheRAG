#include <iostream>

using namespace std;

int main()
{
	int paper[10][10] = {0};
	int x,y,s;
	char dummy;
	
	while ( cin >> x >> dummy >> y >> dummy >> s ) {
		switch (s) {
		case 1:
			paper[x][y]++;
			if (x>0) paper[x-1][y]++;
			if (x<9) paper[x+1][y]++;
			if (y>0) paper[x][y-1]++;
			if (y<9) paper[x][y+1]++;
			break;
		case 2:
			paper[x][y]++;
			if (x>0) {
				paper[x-1][y]++;
				if (y>0) paper[x-1][y-1]++;
				if (y<9) paper[x-1][y+1]++;
			}
			if (x<9) {
				paper[x+1][y]++;
				if (y>0) paper[x+1][y-1]++;
				if (y<9) paper[x+1][y+1]++;
			}
			if (y>0) paper[x][y-1]++;
			if (y<9) paper[x][y+1]++;
			break;
		case 3:
			if (x>1) paper[x-2][y]++;
			if (x<8) paper[x+2][y]++;
			if (y>1) paper[x][y-2]++;
			if (y<8) paper[x][y+2]++;
			paper[x][y]++;
			if (x>0) {
				paper[x-1][y]++;
				if (y>0) paper[x-1][y-1]++;
				if (y<9) paper[x-1][y+1]++;
			}
			if (x<9) {
				paper[x+1][y]++;
				if (y>0) paper[x+1][y-1]++;
				if (y<9) paper[x+1][y+1]++;
			}
			if (y>0) paper[x][y-1]++;
			if (y<9) paper[x][y+1]++;
			break;
		}
	}
	
	int zerocnt = 0;
	int maxdens = 0;
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (paper[i][j]==0) zerocnt++;
			if (maxdens < paper[i][j]) maxdens = paper[i][j];
		}
	}
	
	cout << zerocnt << endl << maxdens << endl;
	
	return 0;
}