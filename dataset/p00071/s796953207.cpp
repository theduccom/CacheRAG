#include <iostream>
using namespace std;

char c[10][10];

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int doit(int x,int y){
	if( y < 0 || x < 0 || y >= 8 || x >= 8 || c[y][x] == '0' ) return 0;
	c[y][x] = '0';
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 1 ; j <= 3 ; j++){
			doit(x+dx[i]*j,y+dy[i]*j);
		}
	}
}
int main(){
	int T;
	cin >> T;
	for(int t = 1 ; t <= T ; t++){
		cout << "Data " << t << ":" << endl; 
		for(int i = 0 ; i < 8 ; i++)
			for(int j = 0 ; j < 8 ; j++)
				cin >> c[i][j];
		int x,y;
		cin >> x >> y;
		y--,x--;
		doit(x,y);
		for(int i = 0 ; i < 8 ; i++){
			for(int j = 0 ; j < 8 ; j++)cout << c[i][j];
			cout << endl;
		}
	}
	
}