#include <iostream>
#include <algorithm>
using namespace std;

const int mx[4] = {1, -1, 0, 0};
const int my[4] = {0, 0, 1, -1};
char map[12][12];

void func(int x, int y){
	if(x >= 0 && x < 12 && y >= 0 && y < 12 && map[x][y] == '1'){
		map[x][y] = '0';
		for(int i = 0; i < 4; ++i){
			func(x + mx[i], y + my[i]);
		}
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	char n;
	while(cin >> n){
		for(int i = 0; i < 12; ++i){
			for(int j = 0; j < 12; ++j){
				if(i == 0 && j == 0)
					map[i][j] = n;
				else
					cin >> map[i][j];
			}
		}
	
		int ans = 0;
		for(int i = 0; i < 12; ++i){
			for(int j = 0; j < 12; ++j){
				if(map[i][j] == '1'){
					func(i, j);
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
	
	return 0;
}