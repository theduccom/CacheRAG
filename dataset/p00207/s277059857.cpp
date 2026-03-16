#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
#define  MAX 100
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};
int field[MAX][MAX]; 
int w,h;
int xs,ys,xg,yg;
int n;
int color;
bool flag = false;

void blockset(int a,int b,int xx,int yy){
	if(b == 0){
		field[yy][xx] = a;	
		field[yy][xx+1] = a;	
		field[yy][xx+2] = a;	
		field[yy][xx+3] = a;	
		field[yy+1][xx] = a;	
		field[yy+1][xx+1] = a;	
		field[yy+1][xx+2] = a;	
		field[yy+1][xx+3] = a;	
	}else if(b == 1){
		field[yy][xx] = a;	
		field[yy+1][xx] = a;	
		field[yy+2][xx] = a;	
		field[yy+3][xx] = a;	
		field[yy][xx+1] = a;	
		field[yy+1][xx+1] = a;	
		field[yy+2][xx+1] = a;	
		field[yy+3][xx+1] = a;
	}
}

void dfs(int x,int y){
	field[y][x] = 0;
	
	if(x == xg && y == yg){
		flag = true;
		return;
	}
	for(int i = 0;i < 4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= w || ny >= h){
			continue;
		}else if(field[ny][nx] == color){
			dfs(nx,ny);
		} 
	}
	
	
}

int main(){
	while(true){
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		cin >> xs >> ys >> xg >> yg;
		xs--;
		ys--;
		xg--;
		yg--;
		cin >> n;
		for(int i = 0;i < n;i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			x--;
			y--;
			blockset(c,d,x,y);
		}
		color = field[ys][xs];
		flag = false;
		if(color)dfs(xs,ys);

		if(flag){
			cout << "OK" << endl;
		}else{
			cout << "NG" << endl;
		}
	}

	return 0;
}