#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int area[14][14];
	int x, y;
	char a, b;
	int size;
	for(int i = 0; i < 14; i++){
		for(int j = 0; j < 14; j++){
			area[i][j] = 0;
		}
	}
	while(cin >> x >> a >> y >> b >> size){
		x += 2;
		y += 2;
		area[x][y]++;
		area[x+1][y]++;
		area[x-1][y]++;
		area[x][y+1]++;
		area[x][y-1]++;
		if(size >= 2){
			area[x+1][y+1]++;
			area[x+1][y-1]++;
			area[x-1][y-1]++;
			area[x-1][y+1]++;
			if(size == 3){
				area[x+2][y]++;
				area[x-2][y]++;
				area[x][y+2]++;
				area[x][y-2]++;
			}
		}
	}
	int count = 0;
	int kmax = 0;
	for(int i = 2; i < 12; i++){
		for(int j = 2; j < 12; j++){
			if(area[i][j] == 0) count++;
			kmax = max(kmax, area[i][j]);
		}
	}
	cout << count << endl;
	cout << kmax << endl;
	return 0;
}