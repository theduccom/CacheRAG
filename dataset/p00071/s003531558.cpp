#include <iostream>
#include <string>
using namespace std;

string f[8];
int dx[12] = {0,0,0,-1,-2,-3,0,0,0,1,2,3};
int dy[12] = {-1,-2,-3,0,0,0,1,2,3,0,0,0};

void bomb(int x, int y){
	for(int i=0 ; i < 12 ; i++ ){
		int mx = x + dx[i];
		int my = y + dy[i];
		if( mx < 0 || my < 0 || mx >= 8 || my >= 8 ) continue;
		if( f[my][mx] == '1' ){
			f[my][mx] = '0';
			bomb( mx , my );
		}
	}
}

int main(){
	int n;
	cin >> n;
	for(int t=1 ; t <= n ; t++ ){
		int x,y;

		for(int i=0 ; i < 8 ; i++ ){
			cin >> f[i];
		}
		cin >> x >> y;
		x--;
		y--;
		f[y][x] = '0';
		bomb( x , y );
		cout << "Data " << t << ":" << endl;
		for(int i=0 ; i < 8 ; i++ ){
			cout << f[i] << endl;
		}
	}
}