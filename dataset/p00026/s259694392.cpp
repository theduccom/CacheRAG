#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int paper[10][10];

bool inField(int argX, int argY) {
	if (argX < 0 || argX > 9 || argY < 0 || argY > 9) return false;
	return true;
}

int main() {
	string input = "";
	cin >> input;
	
	int dx[13] = { 0, 0, 1, 0, -1, 1, 1, -1, -1, 0, 2, 0, -2 };
	int dy[13] = { 0, -1, 0, 1, 0, -1, 1, 1, -1, -2, 0, 2, 0 };
	
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			paper[x][y] = 0;
		}
	}
	
	while (input.size() > 0) {
		
		int dropX = input[0] - '0';
		int dropY = input[2] - '0';
		int dropSize = input[4] - '0';
		int dropNum;
		
		if (dropSize == 1) dropNum = 5;
		else if (dropSize == 2) dropNum = 9;
		else dropNum = 13;
		
		for (int i = 0; i < dropNum; i++) {
			if (!inField(dropX + dx[i], dropY + dy[i])) continue;
			
			paper[dropX + dx[i]][dropY + dy[i]]++;
		}
		
		input = "";
		cin >> input;
	}
	
	int blankNum = 0;
	int maxDensity = 0;
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (paper[x][y] == 0) {
				blankNum++;
			} else if (paper[x][y] > maxDensity) {
				maxDensity = paper[x][y];
			}
		}
	}
	
	cout << blankNum << endl;
	cout << maxDensity << endl;
	
	return 0;
}