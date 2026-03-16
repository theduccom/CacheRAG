#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define X first
#define Y second
#define WIDTH 8
#define HEIGHT 8

using namespace std;

vector<string> init(){
	vector<string> map;
	for(int i = 0; i < HEIGHT; i++){
		string tmp;
		getline(cin,tmp);
		map.push_back(tmp);
	}
	return map;
}

void countNum(vector<string> map, int *count){
	int counter = -1;
	
	for(int i = 0; i < HEIGHT; i++){
		for(int j = 0; j < WIDTH ; j++){
			if(map[i][j] == '1'){
				counter++;
				if(counter == 3) return;
			}
			else{
				if(counter >= 0) count[counter]++;
			}
		}
	}

	return;
}


char checkChar(int *count){
	if(count[0] == 0 && count[1] == 6 && count[2] == 0){
		return 'A';
	}
	else if(count[0] == 7 && count[1] == 7 && count[2] == 7){
		return 'B';
	}
	else if(count[0] == 0 && count[1] == 0 && count[2] == 0){
		return 'C';
	}
	else if(count[0] == 6 && count[1] == 0 && count[2] == 6){
		return 'D';
	}
	else if(count[0] == 0 && count[1] == 7 && count[2] == 0){
		return 'E';
	}
	else if(count[0] == 7 && count[1] == 0 && count[2] == 7){
		return 'F';
	}
	else if(count[0] == 0 && count[1] == 5 && count[2] == 0){
		return 'G';
	}
}



int main(){
	
	while(1){
		if(cin.eof()) break;
		vector<string> map = init();
		int count[] = {0, 0, 0};
		countNum(map, count);
		cout << checkChar(count) << endl;
		//入力で一行改行が入ってしまうのでそれ対策
		string tmp;
		getline(cin, tmp);
	}
	return 0;
}