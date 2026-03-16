//#define _USE_MATH_DEFINES
//#include <cmath>
#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <time.h>
//#include <sstream>
//#include <queue>

using namespace std;


int main(){

	int field[14][14];
	int x, y, s,cntz = 0,max = 0;
	char c;

	for (int i = 0; i < 14; i++){
		for (int j = 0; j < 14; j++){
			field[i][j] = 0;
		}
	}


	while (cin >> x >> c >> y >> c >> s){

		//?°?
		if (s == 1){
			field[x + 2][y + 2]++;
			field[x + 2][y + 1]++;
			field[x + 2][y + 3]++;
			field[x + 1][y + 2]++;
			field[x + 3][y + 2]++;
		}
		//????????§
		if (s == 2 || s == 3){
			for (int i = -1; i <= 1; i++){
				for (int j = -1; j <= 1; j++){
					field[x + 2 + i][y + 2 + j]++;
				}
			}
		}
		//??§
		if (s == 3){
			field[x + 2][y]++;
			field[x + 2][y + 4]++;
			field[x][y + 2]++;
			field[x + 4][y + 2]++;
		}

	}

	for (int i = 2; i < 12; i++){
		for (int j = 2; j < 12; j++){
			if (field[i][j] == 0)cntz++;
			if (field[i][j] > max)max = field[i][j];
		}
	}

	cout << cntz << endl;
	cout << max << endl;

	return 0;
}