#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;



int main(void){

int w, h;
string ss;
	while(cin >> h >> w ){
		if(h==0 && w==0 || cin.eof()) break;
		vector<string> bd(h);
		vector<vector<char> > lc(h,vector<char>(w,' '));
		rep(i,h) cin >> bd[i];
		int y=0, x=0, loop=0;
		while(1){
			if(x<0 || y<0 || x>=w || y >=h) {loop=99;break;}
			if(lc[y][x]=='z'){ loop=1; break; }
			lc[y][x] = 'z';
			if(bd[y][x]=='.') break;
			else if(bd[y][x]=='>') x++;
			else if(bd[y][x]=='<') x--;
			else if(bd[y][x]=='^') y--;
			else if(bd[y][x]=='v') y++;
		}
		if(loop>0 && loop < 90) cout << "LOOP" << endl;
		else if(loop==0) cout << x << " " << y << endl;
	}
	return 0;
	
}