#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

char map[12][12];

void dfs(int y, int x){
    map[y][x] = '0';
    if (0 <= x+1 && x+1 < 12 && 0 <= y && y < 12 && map[y][x+1] == '1') dfs(y, x+1);
    if (0 <= x-1 && x-1 < 12 && 0 <= y && y < 12 && map[y][x-1] == '1') dfs(y, x-1);
    if (0 <= x && x < 12 && 0 <= y+1 && y+1 < 12 && map[y+1][x] == '1') dfs(y+1, x);
    if (0 <= x && x < 12 && 0 <= y-1 && y-1 < 12 && map[y-1][x] == '1') dfs(y-1, x);
    return;
}

int main(){
    while (1){
	int ans = 0;
	for (int i = 0; i < 12; i++)
	    cin >> map[i];
	if (cin.eof()) break;	
	for (int i = 0; i < 12; i++){
	    for (int j = 0; j < 12; j++){
		if (map[i][j] == '1')
		    dfs(i, j), ans++;
	    }
	}
	cout << ans << endl;
    }
    return 0;
}