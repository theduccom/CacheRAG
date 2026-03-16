#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int x, y, ink, blank=0, max=0, m[10][10];
	int mx[]={0, 1, 0, -1, 1, 1, -1, -1, 0, 2, 0, -2};
	int my[]={1, 0, -1, 0, 1, -1, -1, 1, 2, 0, -2, 0};

	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			m[i][j]=0;
		}
	}

	while(scanf("%d, %d, %d", &x, &y, &ink)!=EOF) {
		m[x][y]++;
		for(int i=0; i<ink*4; i++) {
			int dx=x+mx[i];
			int dy=y+my[i];
			if(dx>=0&&dx<=9&&dy>=0&&dy<=9)
				m[dx][dy]++;
		}
	}

	for(int x=0; x<10; x++) {
		for(int y=0; y<10; y++) {
			if(m[y][x]==0)
				blank++;
			if(m[y][x]>max)
				max=m[y][x];
		}
	}

	cout << blank << endl << max << endl;

	return 0;

}