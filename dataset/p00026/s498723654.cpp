#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int tile[10][10];
int whtile = 0;
int mxtile = 0;


void paintS(int x, int y){
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	tile[y][x]++;
	for (int i = 0; i < 4; i++){
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < 10 && 0 <= Y && Y < 10) tile[Y][X]++;
	}
}


void paintM(int x, int y){
	int dx[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
	int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	tile[y][x]++;
	for (int i = 0; i < 8; i++){
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < 10 && 0 <= Y && Y < 10) tile[Y][X]++;
	}
}


void paintL(int x, int y){
	int dx[12] = { 1, 1, 0, -1, -1, -1, 0, 1, 2, 0, -2, 0 };
	int dy[12] = { 0, 1, 1, 1, 0, -1, -1, -1, 0, 2, 0, -2 };
	tile[y][x]++;
	for (int i = 0; i < 12; i++){
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < 10 && 0 <= Y && Y < 10) tile[Y][X]++;
	}
}


void paint(int x, int y, int s){
	if (s == 1) paintS(x, y);
	else if (s == 2) paintM(x, y);
	else paintL(x, y);
}


void solve(){
	for (int i = 0; i < 10; i++){
		whtile += count(begin(tile[i]), end(tile[i]), 0);
		mxtile = max(mxtile, *max_element(begin(tile[i]), end(tile[i])));
	}
}


int main(){
	int x, y, s;
	string in;
	while (cin >> in){
		replace(in.begin(), in.end(), ',', ' ');
		stringstream ss;
		ss << in;
		ss >> x >> y >> s;

		paint(x, y, s);
	}

	solve();

	cout << whtile << endl;
	cout << mxtile << endl;

	return 0;
}