#include <iostream>
using namespace std;

int main(){
	int x,y,size;
	int map[10][10] = {};
	char a,b;
	while(cin >> x >> a >> y >> b >> size){
		map[x][y] += 1;
		if(size == 1){
			for(int i=-1;i<=1;i++){
				if(i==0) continue;
				else{
					if(x+i > -1 && x+i < 10) map[x+i][y]++;
					else if(y+i > -1 && y+i < 10) map[x][y+i]++;
				}
			}
		}
		else if(size == 2){
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(i==0&&j==0) continue;
					else {
						if(x+i > -1 && x+i < 10 && y+i > -1 && y+i < 10) map[x+i][y+j]++;
					}
				}
			}
		}
		else if(size == 3){
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(i==0&&j==0) continue;
					else if(x+i < 0 && x+i > 10 && y+j < 0 && y+j > 10) continue;
					else {
						map[x+i][y+j] += 1;
						if(i == -1 && j == 0){
							if(x+i+i > -1 && y+j+j > -1){
								map[x+i+i][y+j+j]++;
							}
						}
						else if(i == 0 && j == -1){
							if(y+j+j > -1){
								map[x][y+j+j]++;
							}
						}
						else if(i==0 && j == 1){
							if(y+j+j < 10){
								map[x][y+j+j]++;
							}
						}
						else if(i==1 && j==0){
							if(x+i+i < 10 && y+j+j < 10){
								map[x+i+i][y+j+j]++;
							}
						}

					}
				}
			}
		}
	}
	int ecount = 0,tmp = 0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(map[i][j] == 0) ecount++;
			else if(map[i][j] > 0){
				if(map[i][j] > tmp){
					tmp = map[i][j];
				}
			}
		}
	}
	cout << ecount << endl;
	cout << tmp << endl;
	return 0;
}