#include <iostream>

using namespace std;

int main(){

	int h, w;
	char field[1000][1000];
	bool vis[1000][1000];

	while(cin>>h>>w, (h||w)){
			
		for(int i=0; i<h; ++i){
			for(int j=0; j<w; ++j){
				
				vis[i][j]=false;
				cin>>field[i][j];
			}
		}
		
		int x=0, y=0;
		
		while(!vis[y][x] && field[y][x] != '.'){
			
			vis[y][x] = true;

			if(field[y][x]=='>'){
				x += 1;
			}
			else if(field[y][x]=='^'){
				y -= 1;
			}
			else if(field[y][x]=='<'){
				x -= 1;
			}
			else if(field[y][x]=='v'){
				y += 1;
			}

		}
		
		if(vis[y][x]){
			cout << "LOOP" << endl;
		}
		else{
			cout << x << " " << y << endl;
		}
	}

	return 0;
}