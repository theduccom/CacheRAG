#include <iostream>
using namespace std;

char field[13][13];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int y, int x){
    if(y < 0 || y >= 12 || x < 0 || x >= 12 || field[y][x] == '0'){
        return;
    }
    field[y][x] = '0';
    for(int i=0; i<4; i++){
        bfs(y+dy[i], x+dx[i]);
    }
}

int main(void){
	while(1){
	    for(int i=0; i<12; i++){
	        for(int j=0; j<12; j++){
	            cin >> field[i][j];
	        }
	    }
	    if(cin.eof()){
	    	break;
	    }
	    int ans = 0;
	    for(int i=0; i<12; i++){
	        for(int j=0; j<12; j++){
	            if(field[i][j] == '1'){
	                bfs(i,j);
	                ans++;
	            }
	        }
	    }
    	cout << ans << endl;
	}
    return 0;
}