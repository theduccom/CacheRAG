// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

void chain(char map[8][8], int baseX, int baseY){
	int vec[7] = { 3, 2, 1, 0, -1, -2, -3 };

	map[baseY][baseX] = '2';
	for (int i = 0; i < 7; i++){

		// for DEBUG
		/*for (int j = 0; j < 8; j++){
			for (int k = 0; k < 8; k++){
				cout << map[j][k];
			}
			cout << endl;
		}
		cout << "-------------- i = " << i << " END" << endl;*/


		// 同列爆風
		// 行が0~7かどうか
		if (baseY + vec[i] >= 0 && baseY + vec[i] <= 7){

			// for DEBUG
			// cout << "nowCheck (" << baseX+1 << ", " << baseY + vec[i]+1 << ")" << endl;

			if (map[baseY + vec[i]][baseX] == '1'){
				chain(map, baseX, baseY + vec[i]);
			}
			else{
				map[baseY + vec[i]][baseX] = '2';
			}
		}
		// 同行爆風
		// 列が0~7かどうか
		if (baseX + vec[i] >= 0 && baseX + vec[i] <= 7){

			// for DEBUG
			// cout << "nowCheck (" << baseX + vec[i] + 1 << ", " << baseY+ 1 << ")" << endl;

			if (map[baseY][baseX + vec[i]] == '1'){
				chain(map, baseX + vec[i], baseY);
			}
			else{
				map[baseY][baseX + vec[i]] = '2';
			}
		}
	}
}

void solve(char map[8][8], int x, int y){
	int vec[7] = { 3, 2, 1, 0, -1, -2, -3 };

	chain(map, x, y);
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (map[i][j] != '1'){
				map[i][j] = '0';
			}
		}
	}
}

int main(){
	char map[8][8] = {};
	int mapnum = 0, x = 0, y = 0;
	cin >> mapnum;
	for (int i = 0; i < mapnum; i++){
		for (int j = 0; j < 8; j++){
			for (int k = 0; k < 8; k++){
				cin >> map[j][k];
			}
		}
		cin >> x;
		cin >> y;
		solve(map, --x, --y);

		cout << "Data " << (i + 1) << ":" << endl;
		for (int j = 0; j < 8; j++){
			for (int k = 0; k < 8; k++){
				cout << map[j][k];
			}
			cout << endl;
		}
	}

	return 0;
}