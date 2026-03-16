#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

void dfs(int x, int y, char map[8][9]){
    if (map[y][x] != '1') return;
    map[y][x] = '0';
    for (int i = 1; i <= 3; i++){
	if (x - i >= 0) dfs(x-i, y, map);
	if (x + i < 8) dfs(x+i, y, map);
	if (y - i >= 0) dfs(x, y-i, map);
	if (y + i < 8) dfs(x, y+i, map);
    }
}


int main(){
    char map[8][9];
    int x, y;
    int max;
    cin >> max;

    for (int num = 1; num <= max; num++){
	for (int i = 0; i < 8; i++) cin >> map[i];
	cin >> x >> y;
	dfs(x - 1, y - 1, map);
	cout << "Data " << num << ":" << endl;
	for (int i = 0; i < 8; i++)
	    cout << map[i] << endl;
    }
    return 0;
}