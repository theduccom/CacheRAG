#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

const int MAX_MAP = 12;
const int x2[4] = {0,1,0,-1}, y2[4] = {1,0,-1,0};
char island[MAX_MAP+1][MAX_MAP+1];


void island_clear(int x, int y){
	island[x][y] = '0';
	for(int i=0; i<4; i++){
		int next_x = x+x2[i], next_y = y+y2[i];
		if(next_x >= 0 && next_x < MAX_MAP && next_y >= 0 && next_y < MAX_MAP && island[next_x][next_y] == '1'){
			island_clear(next_x,next_y);
		}
	}
}

void count(){
	int count=0;
	
	for(int i=0; i<MAX_MAP; i++){
		for(int j=0; j<MAX_MAP; j++){
			if(island[i][j] == '1'){
				island_clear(i,j);
				count++;
			}
		}
	}
	cout << count << endl;
}

int main(){
	string s;
	while(scanf("%s", island[0]) != EOF){
		for(int i=1; i<MAX_MAP; i++){
			scanf("%s", island[i]);
		}
		count();
	}
}