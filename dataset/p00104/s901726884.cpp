#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	int h,w;
	while(1){
		cin >> h >> w;
		if(h+w==0) break;
		char a[w][h];
		bool p[w][h];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> a[j][i];
				p[j][i] = false;
			}
		}
		int x = 0;
		int y = 0;
		bool loop = false;
		while(1){
			if(p[x][y]){ loop = true; break;}
			p[x][y] = true;
			if(a[x][y]=='.') break;
			else if(a[x][y]=='>') x++;
			else if(a[x][y]=='<') x--;
			else if(a[x][y]=='^') y--;
			else if(a[x][y]=='v') y++;
		}
		if(loop) cout << "LOOP" << endl;
		else cout << x << " " << y << endl;
	}
}