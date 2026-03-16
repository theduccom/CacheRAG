#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int a[20][20];
	for(int i = 0;i < 20;i++){
		for(int j = 0;j < 20;j++){
			a[i][j] = 1000;
		}
	}
	for(int i = 5;i < 15;i++){
		for(int j = 5;j < 15;j++){
			a[i][j] = 0;
		}
	}
	int x, y, size;
	char b, c;
	int count = 0, hold = 0;
	while(cin >> x >> b >> y >> c >> size){
		int X = x+5, Y = y+5;
		if(size == 1){
			a[Y][X]++;
			a[Y+1][X]++;
			a[Y][X+1]++;
			a[Y-1][X]++;
			a[Y][X-1]++;
		}
		else if(size == 2){
			a[Y][X]++;
			a[Y+1][X]++;
			a[Y][X+1]++;
			a[Y-1][X]++;
			a[Y][X-1]++;
			a[Y+1][X+1]++;
			a[Y-1][X+1]++;
			a[Y-1][X-1]++;
			a[Y+1][X-1]++;
		}
		else if(size == 3){
			a[Y][X]++;
			a[Y+1][X]++;
			a[Y][X+1]++;
			a[Y-1][X]++;
			a[Y][X-1]++;
			a[Y+1][X+1]++;
			a[Y-1][X+1]++;
			a[Y-1][X-1]++;
			a[Y+1][X-1]++;
			a[Y-2][X]++;
			a[Y][X-2]++;
			a[Y+2][X]++;
			a[Y][X+2]++;
		}
		/*for(int i = 5;i < 15;i++){
			for(int j = 5;j < 15;j++){
				cout << a[i][j];
			}
			cout << endl;
		}
		cout << endl;*/

		count = 0, hold = 0;
		for(int i = 5;i < 15;i++){
			for(int j = 5;j < 15;j++){
				if(a[i][j] == 0) count++;
				else if(hold < a[i][j]) hold = a[i][j];
			}
		}

	}
	cout << count << endl;
	cout << hold << endl;
	return 0;
}