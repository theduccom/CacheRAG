#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int x, y, p, pt;
	string str;
	int field[10][10];
	int res_M, res_zero;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			field[i][j] = 0;
		}
	}
	
	while(getline(cin, str)){
		x = 0; y = 0; p = 0;
		pt = 0;
		
		while(pt < str.size() && str[pt] != ','){
			x = x * 10 + (str[pt] - 48);
			pt++;
		}
		pt++;
		while(pt < str.size() && str[pt] != ','){
			y = y * 10 + (str[pt] - 48);
			pt++;
		}
		pt++;
		while(pt < str.size() && str[pt] != ','){
			p = p * 10 + (str[pt] - 48);
			pt++;
		}
		
		//1st
		field[y][x]++;
		if(y > 0) field[y - 1][x]++;
		if(x > 0) field[y][x - 1]++;
		if(y + 1 < 10) field[y + 1][x]++;
		if(x + 1 < 10) field[y][x + 1]++;
		p--;
		if(p > 0){
			//2nd
			if(x > 0 && y > 0) field[y - 1][x - 1]++;
			if(x + 1 < 10 && y > 0) field[y - 1][x + 1]++;
			if(x > 0 && y + 1 < 10) field[y + 1][x - 1]++;
			if(x + 1 < 10 && y + 1 < 10) field[y + 1][x + 1]++;
			p--;
		}
		if(p > 0){
			//3rd
			if(x - 2 >= 0) field[y][x - 2]++;
			if(x + 2 < 10) field[y][x + 2]++;
			if(y + 2 < 10) field[y + 2][x]++;
			if(y - 2 >= 0) field[y - 2][x]++;
		}
	}
	
	res_M = 0; res_zero = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(field[i][j] == 0) res_zero++;
			else res_M = max(res_M, field[i][j]);
		}
	}
	
	cout << res_zero << endl << res_M << endl;
	
	return 0;
}