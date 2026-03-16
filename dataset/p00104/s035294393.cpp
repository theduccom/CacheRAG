#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int w,h;
	int dx[128]={0};
	int dy[128]={0};
	dx['<'] = -1;
	dx['>'] = 1;
	dy['^'] = -1;
	dy['v'] = 1;
	while(cin >> h >> w , w){
		char data[128][128]={0};
		rep(i,h)rep(j,w)cin >> data[i][j];
		int x = 0 , y = 0 , f = 0;
		while(data[y][x]!='.'){
			char c = data[y][x];
			if(c == '-'){f = 1 ; break;}
			else data[y][x] = '-';
			x += dx[c] , y += dy[c];
		}
		if(f)cout << "LOOP" << endl;
		else cout << x << " " << y << endl;
	}
}