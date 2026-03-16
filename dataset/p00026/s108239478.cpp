#include <iostream>
#include <string>
using namespace std;

int xy[14][14] = {};

int dai(int x, int y){
	xy[x-2][y]++;
	xy[x+2][y]++;
	xy[x][y-2]++;
	xy[x][y+2]++;
	return 0;
}

int chu(int x, int y, int z){
	if(z>2){
		dai(x, y);
	}
	xy[x-1][y+1]++;
	xy[x+1][y+1]++;
	xy[x-1][y-1]++;
	xy[x+1][y-1]++;
	return 0;
}

int sho(int x, int y, int z){
	if(z>1){
		chu(x, y, z);
	}
	xy[x][y]++;
	xy[x-1][y]++;
	xy[x][y-1]++;
	xy[x+1][y]++;
	xy[x][y+1]++;
	return 0;
}

int main(){
	string input, xx, yy, zz;
	int x, y, z;
	while (true){
		cin >> input;
		if (cin.eof()) { break; }
		xx = input[0];
		yy = input[2];
		zz = input[4];
		x = stoi(xx) + 2;
		y = stoi(yy) + 2;
		z = stoi(zz);
		sho(x, y, z);
	}
	int add = 0, max = 0;
	for(int i = 2;i<12;i++){
		for(int j = 2;j<12;j++){
			if (xy[i][j] == 0) { add++; }
			if (xy[i][j] > max) { max = xy[i][j]; }
		}
	}
	cout << add << endl
		<< max << endl;
	return 0;
}