#include <iostream>
#include <cstdio>
using namespace std;

char data[8+3*2][8+3*2];

void recurse(int x,int y){
	data[x][y] = '0';
	
	for(int i=1;i<=3;i++){
		if(data[x+i][y] == '1')recurse(x+i,y);
		if(data[x-i][y] == '1')recurse(x-i,y);
		if(data[x][y+i] == '1')recurse(x,y+i);
		if(data[x][y-i] == '1')recurse(x,y-i);
	}
}

int main(){
	int sx,sy;
	int n;
	cin >> n;
	for(int k=0;k<n;k++){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin >> data[3+j][3+i];
			}
		}
		cin >> sx >> sy;
		sx--;sy--;
	
		recurse(3+sx,3+sy);
	
		printf("Data %d:\n",k+1);
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout << data[3+j][3+i];
			}
			cout << endl;
		}
	}
}