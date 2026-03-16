#include<iostream>
using namespace std;
const int MAX = 101;
char m[MAX+1][MAX+1];

int main(){
	int h,w;
	while(cin >> h >> w){
		bool visited[MAX+1][MAX+1];
		if(h==0 && w==0) break;

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				visited[i][j] = true;
				cin >> m[i][j];
			}
		}
		
		int x=0, y=0;
		
		while(1){
			if(!visited[y][x]){
				cout << "LOOP" << endl;
				break;
			}
			visited[y][x] = false;
			if(m[y][x]=='v') y++;
			if(m[y][x]=='>') x++;
			if(m[y][x]=='^') y--;
			if(m[y][x]=='<') x--;
			if(m[y][x]=='.'){
				cout <<  x << " " << y << endl;
				break;
			}
			
		}
	}
	return 0;
}