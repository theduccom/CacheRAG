#include <iostream>
using namespace std;

char field[12][12];
const int direction_x[4] = {0, 0, 1, -1};
const int direction_y[4] = {-1, 1, 0, 0};
int new_x, new_y = 0;

void dfs(int x, int y){
	field[x][y] = '0';
	
	for(int i = 0;i < 4;i++){
		new_x = x+direction_x[i];
		new_y = y+direction_y[i];
		
		if(0 <= new_x && new_x < 12 && 0 <= new_y && new_y < 12){
			if(field[new_x][new_y] == '1'){
				dfs(new_x, new_y);
			}
		}
	}
	
	return ;
}

int main(){
	int result = 0;
    
	while(cin >> field[0]){
		result = 0;
		
		for(int j = 1;j < 12;j++){
			for(int k = 0;k < 12;k++){
				cin >> field[j][k];
				if (field[j][k] == EOF) { return 0; }
			}
		}
		
		for(int j = 0;j < 12;j++){
			for(int k = 0;k < 12;k++){
				if(field[j][k] == '1'){
					dfs(j,k);
					result++;
				}
			}
		}
		
		cout << result << endl;
	}
	
	return 0;
}