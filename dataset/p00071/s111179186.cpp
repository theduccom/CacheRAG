#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

void explode(int x, int y, vector<string> &ground);

bool isOver(int x, int y){
	return (x < 0 || x >= 8 || y < 0 || y >= 8);
}

void clear(int x, int y, vector<string> &ground){
	if(!isOver(x, y)){
		if(ground[y][x] == '1'){
			explode(x, y, ground);
		}
	}
}

void explode(int x, int y, vector<string> &ground){
	ground[y][x] = '0';
	for(int i = 0; i < 4; i++){
		for(int j = 1; j <= 3; j++){
			clear(x+dx[i]*j, y+dy[i]*j, ground);
		}
	}
}

int main(){
	int n;
	cin >> n;

	for(int k = 0; k < n; k++){
		vector<string> ground(8);
		getline(cin, ground[0]);
		int x, y;
		for(int i = 0; i < 8; i++){
			cin >> ground[i];
		}
		cin >> x >> y;
		x--;
		y--;
		explode(x, y, ground);

		cout << "Data " << k+1 << ':' << endl;
		for(int i = 0; i < 8; i++){
			cout << ground[i] << endl;
		}
	}

	return 0;
}