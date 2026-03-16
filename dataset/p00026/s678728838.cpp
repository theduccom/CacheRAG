#include<iostream>
using namespace std;

int main(){

	int map[14][14] = {0};
	int x, y, size, m, cnt;
	char cnm;
	
	while(cin >> x >> cnm >> y >> cnm >> size){
		x += 2;
		y += 2;
		switch(size){
			case 3: map[y-2][x]++;
							map[y][x-2]++;
							map[y][x+2]++;
							map[y+2][x]++;
			case 2: map[y-1][x-1]++;
							map[y-1][x+1]++;
							map[y+1][x-1]++;
							map[y+1][x+1]++;
			case 1: map[y][x]++;
							map[y-1][x]++;
							map[y][x-1]++;
							map[y][x+1]++;
							map[y+1][x]++;
							break;
		}
	}
	
	cnt = 0;
	m = 0;
	for(int i=2; i<12; i++){
		for(int j=2; j<12; j++){
			if(map[i][j] == 0) cnt++;
			m = max(m, map[i][j]);
		}
	}
	
	cout << cnt << endl << m << endl;

	return 0;

}