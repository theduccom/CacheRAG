#include <iostream>
using namespace std;

int main() {
	int x, y, size;
	int sol[10][10];
	char c;
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			sol[i][j] = 0;
		}
	}
	while(cin >> x >> c >> y >> c >> size) {
		sol[x][y]++;
		if(x - 1 >= 0) sol[x-1][y]++;
		if(y - 1 >= 0) sol[x][y-1]++;
		if(x + 1 < 10) sol[x+1][y]++;
		if(y + 1 < 10) sol[x][y+1]++;
		if(size >= 2) {			
			if(x-1 >= 0 && y-1 >= 0) sol[x-1][y-1]++;
			if(x+1 < 10 && y-1 >= 0) sol[x+1][y-1]++;
			if(x-1 >= 0 && y+1 < 10) sol[x-1][y+1]++;
			if(x+1 < 10 && y+1 < 10) sol[x+1][y+1]++;
		}
		if(size == 3) {
			if(y - 2 >= 0) sol[x][y-2]++;
			if(y + 2 < 10) sol[x][y+2]++;
			if(x - 2 >= 0) sol[x-2][y]++;
			if(x + 2 < 10) sol[x+2][y]++; 
		}
		/*
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				cout << sol[i][j] << " " ;
			}
			cout << endl;
		}
		*/
	}
	int count = 0;
	int max = 0;
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if(sol[i][j] == 0) count++;
			if(sol[i][j] > max) max = sol[i][j];
		}
	}
	cout << count << endl;
	cout << max << endl;
	return 0;
}