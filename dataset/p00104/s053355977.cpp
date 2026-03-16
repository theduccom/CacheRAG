#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char d[101][101];
	int w,h,k,x,y;
	while(cin >> h >> w) {
		if (w+h==0) break;
		for (y=0;y<h;y++) cin >> d[y];
		x=0; y=0; k=0;
		while(true) {
			if (d[y][x]=='.') { cout << x << " " << y << endl; break;}
			switch(d[y][x]) {
				case '<':  x--; break;
				case '>':  x++; break;
				case '^':  y--; break;
				case 'v':  y++; break;
			}
			k++;
			if (k>w*h) {cout << "LOOP" << endl; break;}
		}
	}
    return 0;
	}